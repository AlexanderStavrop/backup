clc;
clear;
close all;

%% System constants
V_dc = 100;
L = 0.025;
R = 10;
f = 50;
omega = 2*pi*f;

%% Expreriment variables

% Time vector
dt = 1e-6;
time = 0:dt:10*1/f;

% ma and mr variables
m_a = 0.9;
m_f = [30, 180];

% Creating the three sin signals
V_a_sin = V_dc * sin(2*pi*f*time);
V_b_sin = V_dc * sin(2*pi*f*time + deg2rad(120));
V_c_sin = V_dc * sin(2*pi*f*time + deg2rad(240));


% Creating the system variables A B C and D
A = -R/L;
B = 1/L;
C = 1;
D = 0;

% Creating the continuous and discrete system accordingly
sys = ss(A, B, C, D);
sysd = c2d(sys, dt);

% Extracting the discrete system variables
A_d = sysd.A;
B_d = sysd.B;
C_d = sysd.C;
D_d = sysd.D;

for i = 1:length(m_f)
    % Creating the triangular signal using the switching frequency
    switch_freq = m_f(i)*f;
    shark_tooth = (V_dc/m_a) * sawtooth(2*pi*switch_freq*time, 0.5);
    
    % Creating the voltage and current matrices
    V_D = zeros(6, length(time));
    I_D = zeros(6, length(time));
    V_Q = zeros(6, length(time));
    I_Q = zeros(6, length(time));
    % Creating the V_A, V_B, V_C vectors
    V_A = zeros(1, length(time));
    V_B = zeros(1, length(time));
    V_C = zeros(1, length(time));
    % Creating the phase voltage vectors
    V_A_phase = zeros(1, length(time));
    V_B_phase = zeros(1, length(time));
    V_C_phase = zeros(1, length(time));
    % Creating the line voltage vectors
    V_A_line = zeros(1, length(time));
    V_B_line = zeros(1, length(time));
    V_C_line = zeros(1, length(time));
    % Creating the transistor control pulse vector
    trans_pulses = zeros(1, 4);
    % Creating the output voltage and current vectors
    V_out = zeros(1, length(time));
    I_out = zeros(3, length(time));
    % Creating the system X matrix
    X = zeros(3, length(time)+1);
    % Creating a vector for the input and output power
    P = zeros(2, length(time));

    for t = 1:length(time)
        % Calculating the condition for the node A and assigning the V_An
        VA_condition = (V_a_sin(t) > shark_tooth(t));
        V_A(t) = V_dc*VA_condition;

        % Calculating the condition for the node B and assigning the V_Bn
        VB_condition = (V_b_sin(t) > shark_tooth(t));
        V_B(t) = V_dc*VB_condition;

        % Calculating the condition for the node C and assigning the V_Cn
        VC_condition = (V_c_sin(t) > shark_tooth(t));
        V_C(t) = V_dc*VC_condition;
        
        % Calculating the line voltages 
        V_A_line(t) = V_A(t) - V_B(t);
        V_B_line(t) = V_B(t) - V_C(t);
        V_C_line(t) = V_C(t) - V_A(t);

        % Calculating phase voltages        
        V_A_phase(t) = (V_A_line(t) - V_C_line(t)) / 3;
        V_B_phase(t) = (V_B_line(t) - V_A_line(t)) / 3;
        V_C_phase(t) = (V_C_line(t) - V_B_line(t)) / 3;

        
        % Solving the system and extracting the current for every phase
        % Phase A
        X(1,t+1) = A_d*X(1, t) + B_d*V_A_phase(t);
        I_out(1, t) = C_d*X(1, t) + D_d*V_A_phase(t);
        % Phase B
        X(2,t+1) = A_d*X(2, t) + B_d*V_B_phase(t);
        I_out(2, t) = C_d*X(2, t) + D_d*V_B_phase(t);
        % Phase C
        X(3,t+1) = A_d*X(3, t) + B_d*V_C_phase(t);
        I_out(3, t) = C_d*X(3, t) + D_d*V_C_phase(t);

        % Assigning the voltage and current of each transistor and each diode for phase A
        % For positive current we assign it accordingly, else invert it
        if (I_out(1, t) > 0)
            I_Q(1, t) = I_out(1, t) * (V_A_phase(t) > 0);
            I_D(4, t) = I_out(1, t) * (V_A_phase(t) < 0);
        else
            I_Q(4, t) = -I_out(1, t) * (V_A_phase(t) < 0);
            I_D(1, t) = -I_out(1, t) * (V_A_phase(t) > 0);
        end
        % Assigning the voltage and current of each transistor and each diode for phase B
        % For positive current we assign it accordingly, else invert it
        if (I_out(2, t) > 0)
            I_Q(3, t) = I_out(2, t) * (V_B_phase(t) > 0);
            I_D(6, t) = I_out(2, t) * (V_B_phase(t) < 0);
        else
            I_Q(6, t) = -I_out(2, t) * (V_B_phase(t) < 0);
            I_D(3, t) = -I_out(2, t) * (V_B_phase(t) > 0);
        end
        % Assigning the voltage and current of each transistor and each diode for phase C
        % For positive current we assign it accordingly, else invert it
        if (I_out(3, t) > 0)
            I_Q(5, t) = I_out(3, t) * (V_C_phase(t) > 0);
            I_D(2, t) = I_out(3, t) * (V_C_phase(t) < 0);
        else
            I_Q(2, t) = -I_out(3, t) * (V_C_phase(t) < 0);
            I_D(5, t) = -I_out(3, t) * (V_C_phase(t) > 0);
        end
    end

    % Plotting
    path = '~/Documents/Github/backup/Ηλεκτρονικά Ισχύος/Lab_4/Review/Images/';

%     % Plotting Polar Voltages
%     title_str = sprintf("Polar Voltages (m_a = %.1f, m_f = %d)", m_a, m_f(i));
%     figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 775]);
%     % Finding the indexes for the seoond period of time
%     start_indx = find(time <= 0.04, 1, 'last');
%     end_indx = find(time <= 0.08, 1, 'last');
%     
%     subplot(3,1,1)
%     plot(time(start_indx:end_indx), V_A_line(start_indx:end_indx))
%     title("V_{AB} line-line")
%     subplot(3,1,2)
%     plot(time(start_indx:end_indx), V_B_line(start_indx:end_indx))
%     title("V_{BC} line-line")
%     subplot(3,1,3)
%     plot(time(start_indx:end_indx), V_C_line(start_indx:end_indx))
%     title("V_{CA} line-line")
%
%     sgtitle(title_str) 
%     fname = sprintf("%sPolar_voltages_%d", path, m_f(i));
%     print(fname, '-depsc')


%     % Plotting Phase Voltages and Phase current
%     title_str = sprintf("Phase Voltages and Current (m_a = %.1f, m_f = %d)", m_a, m_f(i));
%     figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 775]);
%     % Finding the indexes for the seoond period of time
%     start_indx = find(time <= 0.04, 1, 'last');
%     end_indx = find(time <= 0.08, 1, 'last');
%     
%     subplot(3,1,1)
%     plot(time(start_indx:end_indx), V_A_phase(start_indx:end_indx))
%     title("V_{out} - I_{out} (Phase A)")
%     hold on;
%     plot(time(start_indx:end_indx), I_out(1, start_indx:end_indx))
%     subplot(3,1,2)
%     plot(time(start_indx:end_indx), V_B_phase(start_indx:end_indx))
%     title("V_{out} - I_{out} (Phase B)")
%     hold on;
%     plot(time(start_indx:end_indx), I_out(2, start_indx:end_indx))
%     subplot(3,1,3)
%     plot(time(start_indx:end_indx), V_C_phase(start_indx:end_indx))
%     title("V_{out} - I_{out} (Phase C)")
%     hold on;
%     plot(time(start_indx:end_indx), I_out(3, start_indx:end_indx))
%     
%     sgtitle(title_str) 
% 
%     fname = sprintf("%sPhase_V_I_%d", path, m_f(i));
%     print(fname, '-depsc')


%     % Plotting Phase current
%     title_str = sprintf("Phase Current (m_a = %.1f, m_f = %d)", m_a, m_f(i));
%     figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 775]);
%     % Finding the indexes for the seoond period of time
%     start_indx = find(time <= 0.04, 1, 'last');
%     end_indx = find(time <= 0.08, 1, 'last');
%     
%     subplot(3,1,1)
%     plot(time(start_indx:end_indx), I_out(1, start_indx:end_indx))
%     title("I_{out} (Phase A)")
%     subplot(3,1,2)
%     plot(time(start_indx:end_indx), I_out(2, start_indx:end_indx))
%     title("I_{out} (Phase B)")
%     subplot(3,1,3)
%     plot(time(start_indx:end_indx), I_out(3, start_indx:end_indx))
%     title("I_{out} (Phase C)")
% 
%     sgtitle(title_str)  
%     fname = sprintf("%sPhase_I_%d", path, m_f(i));
%     print(fname, '-depsc')


%     % Plotting Transistor current
%     title_str = sprintf("Transistor Current (m_a = %.1f, m_f = %d)", m_a, m_f(i));
%     figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 775]);
%     % Finding the indexes for the seoond period of time
%     start_indx = find(time <= 0.04, 1, 'last');
%     end_indx = find(time <= 0.08, 1, 'last');
%     
%     subplot(6,1,1)
%     plot(time(start_indx:end_indx), I_Q(1, start_indx:end_indx))
%     title("I_{Q1}")
% 
%     subplot(6,1,2)
%     plot(time(start_indx:end_indx), I_Q(2, start_indx:end_indx))
%     title("I_{Q2}")
% 
%     subplot(6,1,3)
%     plot(time(start_indx:end_indx), I_Q(3, start_indx:end_indx))
%     title("I_{Q3}")
% 
%     subplot(6,1,4)
%     plot(time(start_indx:end_indx), I_Q(4, start_indx:end_indx))
%     title("I_{Q4}")
% 
%     subplot(6,1,5)
%     plot(time(start_indx:end_indx), I_Q(5, start_indx:end_indx))
%     title("I_{Q5}")
% 
%     subplot(6,1,6)
%     plot(time(start_indx:end_indx), I_Q(6, start_indx:end_indx))
%     title("I_{Q6}")
% 
%     sgtitle(title_str) 
%     fname = sprintf("%sI_Q_%d", path, m_f(i));
%     print(fname, '-depsc')

%     % Plotting Diode current
%     title_str = sprintf("Diode Current (m_a = %.1f, m_f = %d)", m_a, m_f(i));
%     figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 775]);
%     % Finding the indexes for the seoond period of time
%     start_indx = find(time <= 0.04, 1, 'last');
%     end_indx = find(time <= 0.08, 1, 'last');
%     
%     subplot(6,1,1)
%     plot(time(start_indx:end_indx), I_D(1, start_indx:end_indx))
%     title("I_{D1}")
% 
%     subplot(6,1,2)
%     plot(time(start_indx:end_indx), I_D(2, start_indx:end_indx))
%     title("I_{D2}")
% 
%     subplot(6,1,3)
%     plot(time(start_indx:end_indx), I_D(3, start_indx:end_indx))
%     title("I_{D3}")
% 
%     subplot(6,1,4)
%     plot(time(start_indx:end_indx), I_D(4, start_indx:end_indx))
%     title("I_{D4}")
% 
%     subplot(6,1,5)
%     plot(time(start_indx:end_indx), I_D(5, start_indx:end_indx))
%     title("I_{D5}")
% 
%     subplot(6,1,6)
%     plot(time(start_indx:end_indx), I_D(6, start_indx:end_indx))
%     title("I_{D6}")
% 
%     sgtitle(title_str) 
%     fname = sprintf("%sI_Q_%d", path, m_f(i));
%     print(fname, '-depsc')
end