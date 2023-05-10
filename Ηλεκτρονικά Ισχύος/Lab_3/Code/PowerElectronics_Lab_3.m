clc;
clear;
close all;

% System constants
V_s = 300;
C = 1e-5;
R = 3;
L_phi = 5e-4;
E = 90;
f = 10e3;
dt = 1e-6;

% Creating vectors for the Duty Cycle and L values
Duty_Cycle = [0.5 0.5 0.8];
L = [1e-3, 1e-2, 1e-3];

% Time vector
time = 0:dt:0.025;

% Creating the triangular waveform
shark_tooth = (sawtooth(2*pi*f*time, 0.5) + 1)/2;
for i = 1:length(Duty_Cycle)
    % Selecting the correct Duty cycle and L values
    D = Duty_Cycle(i);
    L_i = L(i);

    % Creating the vectors for the outputs
    I_L = zeros(1, length(time)+1);
    I_C = zeros(1, length(time)+1);
    I_phi = zeros(1, length(time)+1);
    V_C = zeros(1, length(time)+1);

    % Creating the system variables A C and D (Same in both phases)
    sys_A = [0, 0, -1/L_i; 0, -R/L_phi, 1/L_phi; 1/C, -1/C, 0];
    sys_C = [1, 0, 0; 0, 1, 0; 0, 0, 1];
    sys_D = [0, 0; 0, 0; 0, 0];

    for t = 1:length(time)
        % Phase 1
        if (shark_tooth(t) < D)
            % Creating the system variable B
            sys_B = [1/L_i, 0; 0, -1/L_phi; 0, 0];
        % Phase 2
        elseif (shark_tooth(t) >= D)
            % Creating the system variable B
            sys_B = [0, 0; 0, -1/L_phi; 0, 0];
        end
        % Creating the continuous and discrete system accordingly
        sys = ss(sys_A,sys_B,sys_C,sys_D);
        sysd = c2d(sys, dt);

        % Extracting the discrete system variables
        A_d = sysd.A;
        B_d = sysd.B;
        C_d = sysd.C;
        D_d = sysd.D;        

        % Creating the x and u vectors
        x = [I_L(t); I_phi(t); V_C(t)];
        u = [V_s; E];

        % Solving the system
        x_dot = sysd.A*x + sysd.B*u;
        y = sysd.C*x + sysd.D*u;
        
        % Assining the values accordingly
        I_L(t+1) = x_dot(1);
        I_phi(t+1) = x_dot(2);
        V_C(t+1) = x_dot(3);
    end
    I_C = I_L - I_phi;
    
    % path = '~/Documents/Github/backup/Ηλεκτρονικά Ισχύος/Lab_3/Review/Images/';

    % Plotting I_L
    title_str = sprintf("Induction current (Duty Cycle = %.1f, L = %.3f)", D, L_i);
    figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 1600 650]);
    x_indx = find(time <= 0.025, 1, 'last');
    plot(time(1:x_indx), I_L(1:x_indx))
    title(title_str)
    ylabel('Amplitude (A)');
    xlabel('Time (sec)');
    % fname = sprintf("%sI_L_0%d_%d", path, D*10, L_i*1000);
    % print(fname, '-depsc')

    % Plotting I_phi
    title_str = sprintf("Load current (Duty Cycle = %.1f, L = %.3f)", D, L_i);
    figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 1600 650]);
    x_indx = find(time <= 0.025, 1, 'last');
    plot(time(1:x_indx), I_phi(1:x_indx))
    title(title_str)
    ylabel('Amplitude (A)');
    xlabel('Time (sec)');
    % fname = sprintf("%sI_phi_0%d_%d", path, D*10, L_i*1000);
    % print(fname, '-depsc')

    % Plotting I_C
    title_str = sprintf("Capacitor current (Duty Cycle = %.1f, L = %3f)", D, L_i);
    figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 1600 650]);
    x_indx = find(time <= 0.025, 1, 'last');
    plot(time(1:x_indx), I_C(1:x_indx))
    title(title_str)
    ylabel('Amplitude (A)');
    xlabel('Time (sec)');
    % fname = sprintf("%sI_C_0%d_%d", path, D*10, L_i*1000);
    % print(fname, '-depsc')

    % Plotting V_C
    title_str = sprintf("Capacitor Voltage (Duty Cycle = %.1f, L = %.3f)", D, L_i);
    figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 1600 650]);
    x_indx = find(time <= 0.025, 1, 'last');
    plot(time(1:x_indx), V_C(1:x_indx))
    title(title_str)
    ylabel('Amplitude (V)');
    xlabel('Time (sec)');
    % fname = sprintf("%sV_C_0%d_%d", path, D*10, L_i*1000);
    % print(fname, '-depsc');
end