clc;
clear;
close all;

%% 

Vdc = 100;          % DC input voltage
R = 10;             % Load's resistance
L = 0.025;          % Load's induction
f = 50;             % AC frequency
T = 1/f;            % AC period
omega = 2*pi*f;     % Angular frequency
DT = 2*(10^-5);     % Simulation's time step
n = 15;             % Number of periods
t = 0:DT:n*T;       % Time's vector

arg=omega*t;

% System's parameters in space state
A_1 = -R/L;
B_1 = 1/L;
C_1 = 1;
D_1 = 0;

% System in space state
sys_1 = ss(A_1,B_1,C_1,D_1);
% Discrete system
sys_1_discrete = c2d(sys_1, DT);

Ad_1 = sys_1_discrete.A;
Bd_1 = sys_1_discrete.B;
Cd_1 = sys_1_discrete.C;
Dd_1 = sys_1_discrete.D;


for a = [30*pi/180 18*pi/180]
    % Initialization of helping matrices (currents)    
    P1 = zeros(1, length(t));
    P2 = zeros(1, length(t));
    P3 = zeros(1, length(t));
    P4 = zeros(1, length(t));

    V_Q1 = zeros(1, length(t));
    V_Q2 = zeros(1, length(t));
    V_Q3 = zeros(1, length(t));
    V_Q4 = zeros(1, length(t));

    V_D1 = zeros(1, length(t));
    V_D2 = zeros(1, length(t));
    V_D3 = zeros(1, length(t));
    V_D4 = zeros(1, length(t));


    I_Q1 = zeros(1, length(t));
    I_Q2 = zeros(1, length(t));
    I_Q3 = zeros(1, length(t));
    I_Q4 = zeros(1, length(t));

    I_D1 = zeros(1, length(t));
    I_D2 = zeros(1, length(t));
    I_D3 = zeros(1, length(t));
    I_D4 = zeros(1, length(t));

    V_out = zeros(1, length(t));
    I_out = zeros(1, length(t));
    XL   = zeros(1, length(t)+1);




    V_a = 0;
    V_b = 0;
    
        for k=1:length(t)
        wt(k) = mod(arg(k), 2*pi); 

        if ((wt(k) >= 0) && (wt(k) < a))
            P1(k) = 0;
            P2(k) = 1;
            P3(k) = 0;
            P4(k) = 1;
            V_a = 0;
            V_b = 0;
        elseif ((wt(k) >= a) && (wt(k) < pi - a))
            P1(k) = 1;
            P2(k) = 1;
            P3(k) = 0;
            P4(k) = 0;
            V_a = Vdc;
            V_b = 0;
        elseif ((wt(k) >= pi - a) && (wt(k) < pi))
            P1(k) = 1;
            P2(k) = 0;
            P3(k) = 1;
            P4(k) = 0;
            V_a = Vdc;
            V_b = Vdc;
        elseif ((wt(k) >= pi) && (wt(k) < pi + a))
            P1(k) = 1;
            P2(k) = 0;
            P3(k) = 1;
            P4(k) = 0;
            V_a = Vdc;
            V_b = Vdc;
        elseif ((wt(k) >= pi + a) && (wt(k) < 2 * pi - a))
            P1(k) = 0;
            P2(k) = 0;
            P3(k) = 1;
            P4(k) = 1;
            V_a = 0;
            V_b = Vdc;
        elseif ((wt(k) >= 2 * pi - a) && (wt(k) < 2 * pi))
            P1(k) = 0;
            P2(k) = 1;
            P3(k) = 0;
            P4(k) = 1;
            V_a = 0;
            V_b = 0;
        end
        

         V_out(k) = V_a - V_b;
         XL(k+1) = Ad_1*XL(k) + Bd_1*V_out(k);
         I_out(k) = Cd_1*XL(k) + Dd_1*V_out(k);

            if(P2(k) == 1 && P4(k) == 1 && V_out(k) == 0 && I_out(k) > 0)
                I_D4(k) = I_out(k);
                I_Q2(k) = I_out(k);
                V_D4(k) = -V_out(k);
            elseif(P1(k) == 1 && P2(k) == 1 && V_out(k) > 0 && I_out(k) > 0)
                I_Q1(k) = I_out(k);
                I_Q2(k) = I_out(k); 
                V_Q1(k) = V_out(k);
                V_Q2(k) = V_out(k);
            elseif(P1(k) == 1 && P3(k) == 1 && V_out(k) == 0 && I_out(k) > 0)
                I_Q1(k) = I_out(k);
                I_D3(k) = I_out(k); 
                V_D3(k) = -V_out(k);
            elseif(P1(k) == 1 && P3(k) == 1 && V_out(k) == 0 && I_out(k) < 0)
                I_D1(k) = -I_out(k);
                I_Q3(k) = -I_out(k); 
                V_D1(k) = -V_out(k);
            elseif(P3(k) == 1 && P4(k) == 1 && V_out(k) < 0 && I_out(k) < 0)
                I_Q3(k) = -I_out(k);
                I_Q4(k) = -I_out(k); 
                V_Q3(k) = V_out(k);
                V_Q4(k) = V_out(k);
            elseif(P2(k) == 1 && P4(k) == 1 && V_out(k) == 0 && I_out(k) < 0)
                I_D2(k) = -I_out(k);
                I_Q4(k) = -I_out(k); 
                V_D2(k) = -V_out(k);
            elseif ( V_out(k)> 0 && I_out(k) < 0 )
                I_D1(k) = -I_out(k);
                I_D2(k) = -I_out(k);
            elseif ( V_out(k)< 0 && I_out(k) > 0 )
                I_D3(k) = I_out(k);
                I_D4(k) = I_out(k);
            end

        end



    %to calculate rms we use the last period since the current is stabilized
    startp = find(arg>=(8)*pi, 1);
    endp= find(arg>=(10)*pi, 1);

    xaxis=mod(rad2deg(arg(startp:endp-1)),360);

    % Plotting
    path = '~/Documents/Github/backup/Ηλεκτρονικά Ισχύος/Lab_4/Review/Images/';


    % Plotting the Output Voltage and Current
    title_str = sprintf('Output Voltage and Current when a = %.0f', rad2deg(a));
    figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 450]);
    plot(xaxis,V_out(startp:endp-1),xaxis,I_out(startp:endp-1))
    legend('V_o','I_o')
    title(sprintf('Output Voltage and Current when a = %.0f', rad2deg(a)))
    xlabel('Angle')
    ylabel('V_o, I_o')
    xticks(0:60:360); 
    xticklabels({'0', '\pi/3', '2\pi/3', '\pi', '4\pi/3', '5\pi/3', '2\pi'}); 
    axis([0 360, -120 120]);
%     fname = sprintf("%s1_V_out_I_out_%.0f", path, rad2deg(a));
%     print(fname, '-depsc')


    % Plotting the Voltage of the Transistors
    title_str = sprintf('Transistor Voltage when a = %.0f', rad2deg(a));
    figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 450]);
    
    subplot(1,2,1);
    plot(xaxis,V_Q1(startp:endp-1),xaxis,V_Q4(startp:endp-1))
    title(sprintf('Voltage in switches 1,4 when a = %.0f', rad2deg(a)))
    xlabel('Angle')
    ylabel('V_{Q1}, V_{Q4}');
    legend('V_{Q1}','V_{Q4}');
    xticks(0:60:360); 
    xticklabels({'0', '\pi/3', '2\pi/3', '\pi', '4\pi/3', '5\pi/3', '2\pi'}); 
    axis([0 360, -110 110]);

    subplot(1,2,2);
    plot(xaxis,V_Q2(startp:endp-1),xaxis,V_Q3(startp:endp-1))
    title(sprintf('Voltage in switches 2,3 when a = %.0f', rad2deg(a)))
    xlabel('Angle')
    ylabel('V_{Q2}, V_{Q3}');
    legend('V_{Q2}','V_{Q3}');
    xticks(0:60:360); 
    xticklabels({'0', '\pi/3', '2\pi/3', '\pi', '4\pi/3', '5\pi/3', '2\pi'}); 
    axis([0 360, -110 110]);
%     fname = sprintf("%s1_V_Q_%.0f", path, rad2deg(a));
%     print(fname, '-depsc')

    
    % Plotting the Voltage of the Diodes
    title_str = sprintf('Diode Voltage when a = %.0f', rad2deg(a));
    figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 450]);
    
    subplot(1,2,1);
    plot(xaxis,V_D1(startp:endp-1),xaxis,V_D4(startp:endp-1))
    title(sprintf('Voltage in diodes 1,4 when a = %.0f', rad2deg(a)))
    xlabel('Angle')
    ylabel('V_{D1}, V_{D4}');
    legend('V_{D1}','V_{D4}');
    xticks(0:60:360); 
    xticklabels({'0', '\pi/3', '2\pi/3', '\pi', '4\pi/3', '5\pi/3', '2\pi'}); 
    axis([0 360, -5 5]);

    subplot(1,2,2);
    plot(xaxis,V_D2(startp:endp-1),xaxis,V_D3(startp:endp-1))
    title(sprintf('Voltage in diodes 2,3 when a = %.0f', rad2deg(a)))
    xlabel('Angle')
    ylabel('V_{D2}, V_{D3}');
    legend('V_{D2}','V_{D3}');
    xticks(0:60:360); 
    xticklabels({'0', '\pi/3', '2\pi/3', '\pi', '4\pi/3', '5\pi/3', '2\pi'}); 
    axis([0 360, -5 5]);
%     fname = sprintf("%s1_V_D_%.0f", path, rad2deg(a));
%     print(fname, '-depsc')  

    
    % Plotting the Current of the Transistors
    title_str = sprintf('Transistor Current when a = %.0f', rad2deg(a));
    figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 450]);
    subplot(1,2,1);
    plot(xaxis,I_Q1(startp:endp-1),xaxis,I_Q4(startp:endp-1))
    title(sprintf('Current in switches 1,4 when a = %.0f', rad2deg(a)))
    xlabel('Angle')
    ylabel('I_{Q1}, I_{Q4}');
    legend('I_{Q1}','I_{Q4}');
    xticks(0:60:360); 
    xticklabels({'0', '\pi/3', '2\pi/3', '\pi', '4\pi/3', '5\pi/3', '2\pi'}); 
    axis([0 360, -2 10]);

    subplot(1,2,2);
    plot(xaxis,I_Q2(startp:endp-1),xaxis,I_Q3(startp:endp-1))
    title(sprintf('Current in switches 2,3 when a = %.0f', rad2deg(a)))
    xlabel('Angle')
    ylabel('I_{Q2}, I_{Q3}');
    legend('I_{Q2}','I_{Q3}');
    xticks(0:60:360); 
    xticklabels({'0', '\pi/3', '2\pi/3', '\pi', '4\pi/3', '5\pi/3', '2\pi'}); 
    axis([0 360, -2 10]);
%     fname = sprintf("%s1_I_Q_%.0f", path, rad2deg(a));
%     print(fname, '-depsc')  


    % Plotting the Current of the Diodes
    title_str = sprintf('Diode Current when a = %.0f', rad2deg(a));
    figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 450]);
    subplot(1,2,1);
    plot(xaxis,I_D1(startp:endp-1),xaxis,I_D4(startp:endp-1))
    title(sprintf('Current in Diodes 1,4 when a = %.0f', rad2deg(a)))
    xlabel('Angle')
    ylabel('I_{D1}, I_{D4}');
    legend('I_{D1}','I_{D4}');
    xticks(0:60:360); 
    xticklabels({'0', '\pi/3', '2\pi/3', '\pi', '4\pi/3', '5\pi/3', '2\pi'}); 
    axis([0 360, -2 10]);

    subplot(1,2,2);
    plot(xaxis,I_D3(startp:endp-1),xaxis,I_D2(startp:endp-1))
    title(sprintf('Current in Diodes 2,3 when a = %.0f', rad2deg(a)))
    xlabel('Angle')
    ylabel('I_{D2}, I_{D3}');
    legend('I_{D3}','I_{D2}');
    xticks(0:60:360); 
    xticklabels({'0', '\pi/3', '2\pi/3', '\pi', '4\pi/3', '5\pi/3', '2\pi'}); 
    axis([0 360, -2 10]);
%     fname = sprintf("%s1_I_D_%.0f", path, rad2deg(a));
%     print(fname, '-depsc')


    % Calculating and plotting the input current 
    I_dc = I_Q1 - I_D1 + I_Q3 - I_D3;

    title_str = sprintf('Input Current when a = %.0f', rad2deg(a));
    figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 450]);
    plot(t,I_dc)
    title(sprintf('Input current when a = %.0f', rad2deg(a)))
    xlabel('time(s)')
    ylabel('I_{in}(A)');
    axis([0 0.05, -5 10]);
%     fname = sprintf("%s1_I_in_%.0f", path, rad2deg(a));
%     print(fname, '-depsc')


    % Calculating and plotting the input and output power
    Pin = Vdc*I_dc;         % Input's Power
    Pout = V_out.*I_out;    % Output's Power

    title_str = sprintf('P_in - P_out when a = %.0f', rad2deg(a));
    figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 450]);
    subplot(1,2,1);
    plot(t,Pin)
    title(sprintf('Input Power when a = %.0f', rad2deg(a)))
    xlabel('time(s)');
    ylabel('P_{in}');
    axis([0 0.05, -300 1000]);

    subplot(1,2,2);
    plot(t,Pout)
    title(sprintf('Output Power when a = %.0f', rad2deg(a)))
    xlabel('time(s)');
    ylabel('P_{out}');
    axis([0 0.05, -300 1000]);
%     fname = sprintf("%s1_P_%.0f", path, rad2deg(a));
%     print(fname, '-depsc')

    V1rms = rms(V_out(startp:endp));
    I1rms = rms(I_out(startp:endp));
    P_1 = (I1rms^2)*R;
    S1 = I1rms * V1rms;
    PF1 = P_1/S1;
    fprintf('Power Factor when a = %.0f\n', rad2deg(a)); 
    disp(PF1)


    NFFT = length(V_out);
    % Frequency axis
    F = (1/DT)/2*linspace(0,1,NFFT/2+1);
    % Fourier transformation of output's voltage
    VoF = fft(V_out,NFFT)/NFFT;


    figure();
    plot(F,2*abs(VoF(1:NFFT/2+1)));
    title(sprintf('Voltage Vo: Harmonics when a=%.0f',rad2deg(a)));
    xlabel('Frequency (Hz)')
    ylabel('Fourier of Vo')
    axis([0 1000, -1 150]);

    
    
end
