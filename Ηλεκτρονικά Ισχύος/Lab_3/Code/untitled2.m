clearvars;
close all;
clc;

%Given data
Vs=300;
C=10^(-5);
R=3;
L_phi=0.0005;
E=90;
f=10000;
T_total = 0.05;   
dt = 10^(-6);  
Duty_cycle = [0.5 0.5 0.8];
L = [0.001 0.01 0.001];

% Declare time vector
t = 0:dt:T_total-dt; 

%Create the triangle pulse
triangle_pulse = (sawtooth(2*pi*f*t, 0.5)+1)/2;
% figure;
% plot(t,triangle_pulse)
% axis([0 0.001, 0 1]);

%Declare rectangular pulse
rectangular_pulse = zeros(size(triangle_pulse));


for i=1:1
    for k = 1:size(triangle_pulse,2)
    % Create controlling pulse vector based on current duty cycle
    rectangular_pulse(triangle_pulse < Duty_cycle(i)) = 1;
    rectangular_pulse(triangle_pulse >= Duty_cycle(i)) = 0;
    end
    % Plot triangle pulse and controlling pulse
    figure;
    hold on
    plot(t, triangle_pulse);
    plot(t, rectangular_pulse);
    hold off;
    axis([0 0.001, 0 1]);

    %Parameters for phase 1
    A_phase1 = [0, 0, -1/L(i); 0, -R/L_phi, 1/L_phi; 1/C, -1/C, 0];
    B_phase1 = [1/L(i) 0; 0 -1/L_phi; 0 0];
    C_phase1 = eye(3);
    D_phase1 = zeros(3,2);
    
    % Phase 1: System in space state
    sys_phase1 = ss(A_phase1,B_phase1,C_phase1,D_phase1);
    % Discrete system in phase 1
    sys_discrete_phase1 = c2d(sys_phase1, dt);

    A_phase1_discrete = sys_discrete_phase1.A;
    B_phase1_discrete = sys_discrete_phase1.B;
    C_phase1_discrete = sys_discrete_phase1.C;
    D_phase1_discrete = sys_discrete_phase1.D;

    %Parameters for phase 2
    A_phase2 = [0, 0, -1/L(i); 0, -R/L_phi, 1/L_phi; 1/C, -1/C, 0];
    B_phase2 = [0, 0; 0, -1/L_phi; 0 0];
    C_phase2 = eye(3);
    D_phase2 = zeros(3,2);
    
    % Phase 2: System in space state
    sys_phase2 = ss(A_phase2,B_phase2,C_phase2,D_phase2);
    % Discrete system in phase 2
    sys_discrete_phase2 = c2d(sys_phase2, dt);

    A_phase2_discrete = sys_discrete_phase2.A;
    B_phase2_discrete = sys_discrete_phase2.B;
    C_phase2_discrete = sys_discrete_phase2.C;
    D_phase2_discrete = sys_discrete_phase2.D;

    %Initialize vectors 
    X = zeros(3, length(t)+1);
    Y = zeros(3, length(t)); 
    U = [Vs; E];

    for u=1:1:length(t)
        if (rectangular_pulse(u) == 1)
            X(:, u+1) = A_phase1_discrete*X(:, u) + B_phase1_discrete*U;
            Y(:, u)   = C_phase1_discrete*X(:, u) + D_phase1_discrete*U;
        else
            X(:, u+1) = A_phase2_discrete*X(:, u) + B_phase2_discrete*U;
            Y(:, u)   = C_phase2_discrete*X(:, u) + D_phase2_discrete*U;
        end

    end
    
    %Get output data
    I_L = Y(1, :);   
    I_phi = Y(2, :); 
    V_C = Y(3, :);  
    I_C = I_L - I_phi;

    figure;
    plot(t,I_L);
    grid on;
    xlabel('time(sec)');
    ylabel('I_L(A)');
    title(sprintf('Current of Induction when duty cycle = %.1f, L = %.3f',Duty_cycle(i),L(i)));
    xlim([0 0.01])

    figure;
    plot(t,I_phi);
    grid on;
    xlabel('time(sec)');
    ylabel('I_{\phi}(V)');
    title(sprintf('Current of Load when duty cycle = %.1f, L = %.3f',Duty_cycle(i),L(i)));
    xlim([0 0.01])

    figure;
    plot(t,V_C);
    grid on;
    xlabel('time(sec)');
    ylabel('V_C(V)');
    title(sprintf('Voltage of Capacitor when duty cycle = %.1f, L = %.3f',Duty_cycle(i),L(i)));
    xlim([0 0.01])    
    
    figure;
    plot(t,I_C);
    grid on;
    xlabel('time(sec)');
    ylabel('I_C(A)');
    title(sprintf('Current of Capacitor when duty cycle = %.1f, L = %.3f',Duty_cycle(i),L(i)));
    xlim([0 0.01])
end

