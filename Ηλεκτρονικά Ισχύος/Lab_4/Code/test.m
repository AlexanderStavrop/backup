clearvars;
close all;
clc;

V_dc = 100;
R=10;
L = 25*10^-3;
f=50;
T=1/f;

number_of_periods = 10;
dt = 10^-6;
t = 0:dt:number_of_periods*T;

omega_t = 2*pi*f*t;

ma = 0.9;
mf = [40 200];

PF = [0 0];

%%
A = -R/L;
B = 1/L;
C = 1;
D = 0;

sys = ss(A, B, C, D);

sysd = c2d(sys,dt);

Ad = sysd.A;
Bd = sysd.B;
Cd = sysd.C;
Dd = sysd.D;

for k=1:2

    switching_frequency = mf(k)*f;
    Vsine = V_dc*sin(2*pi*f*t);
    Vtrig = (V_dc/ma)*sawtooth(2*pi*switching_frequency*t,1/2);

    
    I_D1 = zeros(1, length(t));
    I_D2 = zeros(1, length(t));
    I_D3 = zeros(1, length(t));
    I_D4 = zeros(1, length(t));

    I_Q1 = zeros(1, length(t));
    I_Q2 = zeros(1, length(t));
    I_Q3 = zeros(1, length(t));
    I_Q4 = zeros(1, length(t));

    V_Q1 = zeros(1, length(t));
    V_Q2 = zeros(1, length(t));
    V_Q3 = zeros(1, length(t));
    V_Q4 = zeros(1, length(t));

    V_D1 = zeros(1, length(t));
    V_D2 = zeros(1, length(t));
    V_D3 = zeros(1, length(t));
    V_D4 = zeros(1, length(t));
    
    X = zeros(1, length(t)+1);
    V_o = zeros(1, length(t));
    I_o = zeros(1, length(t));

    Pulse_1 = zeros(1, length(t));
    Pulse_2 = zeros(1, length(t));
    Pulse_3 = zeros(1, length(t));
    Pulse_4 = zeros(1, length(t));

    active_pulse = 1;
    V_a = zeros(1, length(t));
    V_b = zeros(1, length(t));


    for i = 1:length(t)

        if(Vsine(i) > Vtrig(i))
            V_a(i) = V_dc;
            Pulse_1(i) = active_pulse;
            Pulse_4(i) = 0;
        else 
            V_a(i) = 0;
            Pulse_1(i) = 0;
            Pulse_4(i) = active_pulse;            
        end

        if(-Vsine(i) > Vtrig(i))
            V_b(i) = V_dc;
            Pulse_3(i) = active_pulse;
            Pulse_2(i) = 0;
        else 
            V_b(i) = 0;
            Pulse_3(i) = 0;
            Pulse_2(i) = active_pulse;            
        end

        V_o(i) = V_a(i) - V_b(i);

        X(i+1) = Ad*X(i) + Bd*V_o(i);
        I_o(i) = Cd*X(i) +Dd*V_o(i);

        if(Pulse_2(i) == active_pulse && Pulse_4(i) == active_pulse && V_o(i) == 0 && I_o(i) > 0)
            I_D4(i) = I_o(i);
            I_Q2(i) = I_o(i);
            V_D4(i) = -V_o(i);
        elseif(Pulse_1(i) == active_pulse && Pulse_2(i) == active_pulse && V_o(i) > 0 && I_o(i) > 0)
            I_Q1(i) = I_o(i);
            I_Q2(i) = I_o(i); 
            V_Q1(i) = V_o(i);
            V_Q2(i) = V_o(i);
        elseif(Pulse_1(i) == active_pulse && Pulse_3(i) == active_pulse && V_o(i) == 0 && I_o(i) > 0)
            I_Q1(i) = I_o(i);
            I_D3(i) = I_o(i); 
            V_D3(i) = -V_o(i);
        elseif(Pulse_1(i) == active_pulse && Pulse_3(i) == active_pulse && V_o(i) == 0 && I_o(i) < 0)
            I_D1(i) = -I_o(i);
            I_Q3(i) = -I_o(i); 
            V_D1(i) = -V_o(i);
        elseif(Pulse_3(i) == active_pulse && Pulse_4(i) == active_pulse && V_o(i) < 0 && I_o(i) < 0)
            I_Q3(i) = -I_o(i);
            I_Q4(i) = -I_o(i); 
            V_Q3(i) = V_o(i);
            V_Q4(i) = V_o(i);
        elseif(Pulse_2(i) == active_pulse && Pulse_4(i) == active_pulse && V_o(i) == 0 && I_o(i) < 0)
            I_D2(i) = -I_o(i);
            I_Q4(i) = -I_o(i); 
            V_D2(i) = -V_o(i);
        elseif(V_o(i) >0  && I_o(i) < 0)
            I_D1(i) = -I_o(i);
            I_D2(i) = -I_o(i);
        elseif(V_o(i) <0  && I_o(i) > 0)
            I_D3(i) = I_o(i);
            I_D4(i) = I_o(i);
        end

    end

    last_period_start_index = find(omega_t >= 18*pi, 1);
    last_period_end_index = find(omega_t >= 20*pi, 1);

    figure();
    plot(t(last_period_start_index:last_period_end_index),V_o(last_period_start_index:last_period_end_index))
    hold on;
    plot(t(last_period_start_index:last_period_end_index),I_o(last_period_start_index:last_period_end_index))
    legend('Output Voltage','Output Current')
    title(sprintf('Output Voltage and Output Current when ma = 0.9  and mf = %.0f', mf(k)))

    figure();
    subplot(4,2,1);
    plot(t(last_period_start_index:last_period_end_index),I_Q1(last_period_start_index:last_period_end_index))
    title(sprintf('Current at transistor Q1 when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(4,2,2);
    plot(t(last_period_start_index:last_period_end_index),I_D1(last_period_start_index:last_period_end_index))
    title(sprintf('Current at diode D1 when ma = 0.9  and mf = %.0f', mf(k)))
    
    subplot(4,2,3);
    plot(t(last_period_start_index:last_period_end_index),I_Q2(last_period_start_index:last_period_end_index))
    title(sprintf('Current at transistor Q2 when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(4,2,4);
    plot(t(last_period_start_index:last_period_end_index),I_D2(last_period_start_index:last_period_end_index))
    title(sprintf('Current at diode D2 when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(4,2,5);
    plot(t(last_period_start_index:last_period_end_index),I_Q3(last_period_start_index:last_period_end_index))
    title(sprintf('Current at transistor Q3 when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(4,2,6);
    plot(t(last_period_start_index:last_period_end_index),I_D3(last_period_start_index:last_period_end_index))
    title(sprintf('Current at diode D3 when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(4,2,7);
    plot(t(last_period_start_index:last_period_end_index),I_Q4(last_period_start_index:last_period_end_index))
    title(sprintf('Current at transistor Q4 when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(4,2,8);
    plot(t(last_period_start_index:last_period_end_index),I_D4(last_period_start_index:last_period_end_index))
    title(sprintf('Current at diode D4 when ma = 0.9  and mf = %.0f', mf(k)))

    figure();
    subplot(4,2,1);
    plot(t(last_period_start_index:last_period_end_index),V_Q1(last_period_start_index:last_period_end_index))
    title(sprintf('Voltage at transistor Q1 when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(4,2,2);
    plot(t(last_period_start_index:last_period_end_index),V_D1(last_period_start_index:last_period_end_index))
    title(sprintf('Voltage at diode D1 when ma = 0.9  and mf = %.0f', mf(k)))
    
    subplot(4,2,3);
    plot(t(last_period_start_index:last_period_end_index),V_Q2(last_period_start_index:last_period_end_index))
    title(sprintf('Voltage at transistor Q2 when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(4,2,4);
    plot(t(last_period_start_index:last_period_end_index),V_D2(last_period_start_index:last_period_end_index))
    title(sprintf('Voltage at diode D2 when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(4,2,5);
    plot(t(last_period_start_index:last_period_end_index),V_Q3(last_period_start_index:last_period_end_index))
    title(sprintf('Voltage at transistor Q3 when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(4,2,6);
    plot(t(last_period_start_index:last_period_end_index),V_D3(last_period_start_index:last_period_end_index))
    title(sprintf('Voltage at diode D3 when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(4,2,7);
    plot(t(last_period_start_index:last_period_end_index),V_Q4(last_period_start_index:last_period_end_index))
    title(sprintf('Voltage at transistor Q4 when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(4,2,8);
    plot(t(last_period_start_index:last_period_end_index),V_D4(last_period_start_index:last_period_end_index))
    title(sprintf('Voltage at diode D4 when ma = 0.9  and mf = %.0f', mf(k)))

    Input_current = I_Q3 + I_Q1 - (I_D1 + I_D3);

    figure();
    plot(t,Input_current)
    title(sprintf('Input current when ma = 0.9  and mf = %.0f', mf(k)))

    Input_power = V_dc * Input_current;
    Output_power = V_o .* I_o;

    figure();
    subplot(1,2,1);
    plot(t,Input_power)
    title(sprintf('Input power when ma = 0.9  and mf = %.0f', mf(k)))

    subplot(1,2,2);
    plot(t,Output_power)
    title(sprintf('Output power when ma = 0.9  and mf = %.0f', mf(k)))

    I_o_rms = rms(I_o(last_period_start_index:last_period_end_index));
    V_o_rms = rms(V_o(last_period_start_index:last_period_end_index));
    P = (I_o_rms^2)*R;
    S = I_o_rms * V_o_rms;
    PF(k) = P/S;

    Fs = 1/dt;
    L = length(V_o);
    NFFT = length(V_o)
    f_axis = Fs/2*linspace(0,1,NFFT/2+1);

    Output_Voltage_Harmonics = fft(V_o,NFFT)/L;

    figure();
    plot(f_axis,2*abs(Output_Voltage_Harmonics(1:floor(NFFT/2+1))))
    title(sprintf('Single-Sides Amplitude Spectrum of Vo(t) when ma = 0.9  and mf = %.0f', mf(k)))
    xlabel('Frequency (Hz)')
    ylabel('Vo(f)')
%    xlim([0 2000])

    Output_Current_Harmonics = fft(I_o,NFFT)/L;

    figure();
    plot(f_axis,2*abs(Output_Current_Harmonics(1:floor(NFFT/2+1))))
    title(sprintf('Single-Sides Amplitude Spectrum of Io(t) when ma = 0.9  and mf = %.0f', mf(k)))
    xlabel('Frequency (Hz)')
    ylabel('Io(f)')
 %   xlim([0 2000])


 end