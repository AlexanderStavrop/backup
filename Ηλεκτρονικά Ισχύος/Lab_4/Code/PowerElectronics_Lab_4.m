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
m_f = [40, 200];

% Creating the sin signal
V_sin = V_dc * sin(2*pi*f*time);


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
    V_D = zeros(4, length(time));
    I_D = zeros(4, length(time));
    V_Q = zeros(4, length(time));
    I_Q = zeros(4, length(time));
        I_Q1 = zeros(1, length(time));
    I_Q3 = zeros(1, length(time));
    I_D1 = zeros(1, length(time));
    I_D3 = zeros(1, length(time));
    
    % Creating the V_a and V_b vectors
    V_a = zeros(1, length(time));
    V_b = zeros(1, length(time));
    % Creating the transistor control pulse vector
    trans_pulses = zeros(1, 4);
    % Creating the output voltage and current vectors
    V_out = zeros(1, length(time));
    I_out = zeros(1, length(time));
    % Creating the system X variable
    X = zeros(1, length(time)+1);
    % Creating a vector for the input and output power
    P = zeros(2, length(time));

    for t = 1:length(time)
        % Calculating the condition for the node a and assigning the V_a
        left_condition = (V_sin(t) > shark_tooth(t));
        V_a(t) = V_dc*left_condition;
        
        % Calculating the condition for the node b and assigning the V_b
        right_condition = (-V_sin(t) > shark_tooth(t));
        V_b(t) = V_dc*right_condition;
        
        % Assigning the transistor pulses accordingly
        trans_pulses = [left_condition, ~right_condition, right_condition, ~left_condition];


        % Calculating the output voltage value
        V_out(t) = V_a(t) - V_b(t);
        
        % Calculating the output current by solving the system
        X(t+1) = A_d*X(t) + B_d*V_out(t);
        I_out(t) = C_d*X(t) + D_d*V_out(t);

        
        % Assigning the voltage and current values of the Transistors and
        % Diods according to V_a, V_b, I_out and the pulses
        if (V_out(t) == 0 && I_out(t) > 0)
            % Voltages are zero and currents are positive
            if (trans_pulses(1) == 1 && trans_pulses(3) == 1)
                I_Q(1, t) = I_out(t);                                      % I_Q1
                    I_Q1(t) = I_out(t);%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                I_D(3, t) = I_out(t);                                      % I_D3
                    I_D3(t) = I_out(t);%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            elseif (trans_pulses(2) == 1 && trans_pulses(4) == 1)
                I_Q(2, t) = I_out(t);
                I_D(4, t) = I_out(t);
            end
        elseif (V_out(t) == 0 && I_out(t) < 0)
            % Voltages are zero and currents are negative
            if (trans_pulses(1) == 1 && trans_pulses(3) == 1)
                I_Q(3, t) = -I_out(t);                                     % I_Q3
                
                I_D(1, t) = -I_out(t);                                     % I_D1
                I_D1(t) = -I_out(t);%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
                
                
                
                I_Q3(t) = -I_out(t);%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            elseif (trans_pulses(2) == 1 && trans_pulses(4) == 1)
                I_Q(4, t) = -I_out(t);
                I_D(2, t) = -I_out(t);
            end
        elseif (V_out(t) > 0 && I_out(t) > 0)
            % Voltages and currents are positive
            V_Q(1, t) = V_out(t);
            I_Q(1, t) = I_out(t);                                          % I_Q1
                I_Q1(t)   = I_out(t);%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            V_Q(2, t) = V_out(t);
            I_Q(2, t) = I_out(t);
        elseif (V_out(t) < 0 && I_out(t) < 0)
            % Voltages and currents are negative
            V_Q(3, t) = V_out(t);
            I_Q(3, t) = -I_out(t);                                         % I_Q3
                I_Q3(t) = -I_out(t);%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            V_Q(4, t) = V_out(t);
            I_Q(4, t) = -I_out(t);
        elseif (V_out(t) > 0 && I_out(t) < 0)
            I_D(1, t) = -I_out(i);                                         % I_D1
                I_D1(t) = -I_out(t);%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            I_D(2, t) = -I_out(i);
        elseif (V_out(t) < 0 && I_out(t) > 0)
            % ΓΙΑΤΙ ΔΕΝ ΘΕΤΟΥΜΕ ΤΗΝ ΤΑΣΗ ΜΕ ΚΑΤΙ, ΕΙΝΑΙ 0 ? ΑΦΟΥ ΤΗΝ ΒΑΛΑΜΕ
            % ΝΑ ΕΙΝΑΙ ΘΕΤΙΚΗ
            I_D(3, t) = I_out(i);                                          % I_D3
                I_D3(t) = I_out(t);%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
            I_D(4, t) = I_out(i);
        end
    end

    % Calculating input and output power
    for o = 1:length(time)
        if ((I_Q(1,o) - I_Q1(o)) ~= 0)
            disp("pouli_1")
        end
        if (I_Q(3,o) - I_Q3(o) ~= 0)
            disp("pouli_2")
        end
        if (I_D(1,o) - I_D1(o) ~= 0)
            disp("pouli_3")
        end
%         if (I_D(3,o) - I_D3(o) ~= 0)
%             disp("pouli_4")
%         end
    end
%     input_curr   = I_Q1     + I_Q3     - (I_D1     + I_D3);
%     input_curr_2 = I_Q(1,:) + I_Q(3,:) - (I_D(1,:) + I_D(3,:));
%     input_curr - input_curr_2;
    
%     %     plot(time, input_curr)
%      P(1,:) = (input_curr_2) * V_dc;
%      P(2,:) = I_out .* V_out;
    




%     path = '~/Documents/Github/backup/Ηλεκτρονικά Ισχύος/Lab_4/Review/Images/';
% 
%     % Plotting V_out with V_in
%     % title_str = sprintf("V_{out} - I_{out} (m_a = %.1f, m_f = %d)", m_a, m_f(i));
%     % figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 400]);
%     % x_indx = find(time <= 0.04, 1, 'last');
%     % plot(time(1:x_indx), V_out(1:x_indx))
%     % hold on;
%     % plot(time(1:x_indx), I_out(1:x_indx), 'LineWidth', 1)
%     % hold off;
%     % title(title_str)
%     % fname = sprintf("%sV_out_I_out_%d", path, m_f(i));
%     % print(fname, '-depsc')
% 
%     % Plotting V_out 
%     % title_str = sprintf("V_{out} (m_a = %.1f, m_f = %d)", m_a, m_f(i));
%     % figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 400]);
%     % x_indx = find(time <= 0.02, 1, 'last');
%     % plot(time(1:x_indx), V_out(1:x_indx))
%     % hold off;
%     % title(title_str)
%     % fname = sprintf("%sV_out_%d", path, m_f(i));
%     % print(fname, '-depsc')
% 
%     % Plotting Ι_out 
%     % title_str = sprintf("I_{out} (m_a = %.1f, m_f = %d)", m_a, m_f(i));
%     % figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 400]);
%     % x_indx = find(time <= 0.02, 1, 'last');
%     % plot(time(1:x_indx), I_out(1:x_indx))
%     % hold off;
%     % title(title_str)
%     % fname = sprintf("%sI_out_%d", path, m_f(i));
%     % print(fname, '-depsc')
% 
%     % Plotting V_Q
% %     title_str = sprintf("V_Q (m_a = %.1f, m_f = %d)", m_a, m_f(i));
% %     figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 400]);
% %     x_indx = find(time <= 0.02, 1, 'last');
% %     subplot(2,2,1)
% %     plot(time(1:x_indx), V_Q(1, 1:x_indx))
% %     subplot(2,2,2)
% %     plot(time(1:x_indx), V_Q(2, 1:x_indx))
% %     subplot(2,2,3)
% %     plot(time(1:x_indx), V_Q(3, 1:x_indx))
% %     subplot(2,2,4)
% %     plot(time(1:x_indx), V_Q(4, 1:x_indx))
% %     title(title_str)
%     % fname = sprintf("%sV_Q_%d", path, m_f(i));
%     % print(fname, '-depsc')
% 
%     % Plotting I_Q
%     % title_str = sprintf("I_Q (m_a = %.1f, m_f = %d)", m_a, m_f(i));
%     % figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 400]);
%     % x_indx = find(time <= 0.02, 1, 'last');
%     % subplot(2,2,1)
%     % plot(time(1:x_indx), I_Q(1, 1:x_indx))
%     % subplot(2,2,2)
%     % plot(time(1:x_indx), I_Q(2, 1:x_indx))
%     % subplot(2,2,3)
%     % plot(time(1:x_indx), I_Q(3, 1:x_indx))
%     % subplot(2,2,4)
%     % plot(time(1:x_indx), I_Q(4, 1:x_indx))
%     % title(title_str)
%     % fname = sprintf("%sI_Q_%d", path, m_f(i));
%     % print(fname, '-depsc')
% 
%     % Plotting V_D
%     % title_str = sprintf("V_D (m_a = %.1f, m_f = %d)", m_a, m_f(i));
%     % figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 400]);
%     % x_indx = find(time <= 0.02, 1, 'last');
%     % subplot(2,2,1)
%     % plot(time(1:x_indx), V_D(1, 1:x_indx))
%     % subplot(2,2,2)
%     % plot(time(1:x_indx), V_D(2, 1:x_indx))
%     % subplot(2,2,3)
%     % plot(time(1:x_indx), V_D(3, 1:x_indx))
%     % subplot(2,2,4)
%     % plot(time(1:x_indx), V_D(4, 1:x_indx))
%     % title(title_str)
%     % fname = sprintf("%sV_D_%d", path, m_f(i));
%     % print(fname, '-depsc')
% 
%     % Plotting I_D
%     % title_str = sprintf("I_D (m_a = %.1f, m_f = %d)", m_a, m_f(i));
%     % figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 400]);
%     % x_indx = find(time <= 0.02, 1, 'last');
%     % subplot(2,2,1)
%     % plot(time(1:x_indx), I_D(1, 1:x_indx))
%     % subplot(2,2,2)
%     % plot(time(1:x_indx), I_D(2, 1:x_indx))
%     % subplot(2,2,3)
%     % plot(time(1:x_indx), I_D(3, 1:x_indx))
%     % subplot(2,2,4)
%     % plot(time(1:x_indx), I_D(4, 1:x_indx))
%     % title(title_str)
%     % fname = sprintf("%sI_D_%d", path, m_f(i));
%     % print(fname, '-depsc')
% 
%     % Plotting Input and output power
%     title_str = sprintf("P_{in} - P_{out} (m_a = %.1f, m_f = %d)", m_a, m_f(i));
%     figure('Name', title_str,'NumberTitle','off', 'Position', [2000 700 900 400]);
%     x_indx = find(time <= 0.02, 1, 'last');
%     subplot(1,2,1)
%     plot(time(1:x_indx), P(1, 1:x_indx))
%     subplot(1,2,2)
%     plot(time(1:x_indx), P(2, 1:x_indx))
%     title(title_str)
%     fname = sprintf("%sP_%d", path, m_f(i));
%     print(fname, '-depsc')

end