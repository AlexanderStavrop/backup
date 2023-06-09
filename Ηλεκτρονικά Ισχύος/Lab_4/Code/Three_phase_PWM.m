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
V_a_sin = V_dc * sin(omega*time);
V_b_sin = V_dc * sin(omega*time + deg2rad(120));
V_c_sin = V_dc * sin(omega*time + deg2rad(240));


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
        
        
        % Calculating line and phase voltage of phase A
        V_A_line(t) = V_A(t) - V_B(t);
        V_A_phase(t) = (V_A_line(t) - V_C_line(t)) / 3;
        % Solving the system and extracting the current of phase A
        X(1,t+1) = A_d*X(1, t) + B_d*V_A_phase(t);
        I_out(1, t) = C_d*X(1, t) + D_d*V_A_phase(t);

        % Calculating line and phase voltage of phase B
        V_B_line(t) = V_B(t) - V_C(t);
        V_B_phase(t) = (V_B_line(t) - V_A_line(t)) / 3;
        % Solving the system and extracting the current of phase B
        X(2,t+1) = A_d*X(2, t) + B_d*V_B_phase(t);
        I_out(2, t) = C_d*X(2, t) + D_d*V_B_phase(t);

        % Calculating line and phase voltage of phase C
        V_C_line(t) = V_C(t) - V_A(t);
        V_C_phase(t) = (V_C_line(t) - V_B_line(t)) / 3;
        % Solving the system and extracting the current of phase C
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
end