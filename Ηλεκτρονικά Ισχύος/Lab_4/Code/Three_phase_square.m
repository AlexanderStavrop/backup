%% /------------------------/Q.3/------------------------/
 clear all;
 clear clearvars;
 close all;
 clc;
% /------------------------/Q.3.A/------------------------/

Vdc = 100;          % DC input voltage
active_pulse = 1;   % Pulse amplitude
R = 10;             % Load's resistance
L = 0.025;          % Load's induction
f = 50;             % AC frequency
omega = 2*pi*f;     % Angular frequency
T = 1/f;            % AC period
DT = 2*(10^-5);     % Simulation's time step
n = 5              % Number of periods
t = 0:DT:n*T;       % Time's vector

% Initialization of helping matrices (pulses)
P1 = zeros(size(t));
P2 = zeros(size(t));
P3 = zeros(size(t));
P4 = zeros(size(t));
P5 = zeros(size(t));
P6 = zeros(size(t));

omega_t = omega*t;         % Calculation of w*t
wt = mod(omega_t,2*pi);    % on [0,2pi]

% Construction of each pulse
for i=1:size(t,2)
    
    if (wt(i)>=0 && wt(i)<pi)  % 0<= wt < pi --> P1
        P1(i) = active_pulse;
        P4(i) = 0;
    elseif (wt(i)>=pi && wt(i)<=2*pi) % pi<= wt <=2pi --> P4
        P4(i) = active_pulse;
        P1(i) = 0;
    end
    
    if (wt(i)>=0 && wt(i)<2*pi/3) % 0<= wt <2pi/3 --> P6
        P3(i) = 0;
        P6(i) = active_pulse;
    elseif (wt(i)>=2*pi/3 && wt(i)<5*pi/3) % 2pi/3<= wt <5pi/3 --> P3
        P3(i) = active_pulse;
        P6(i) = 0;
    elseif (wt(i)>=5*pi/3 && wt(i)<=2*pi) % 5pi/3<= wt <=2pi --> P6
        P3(i) = 0;
        P6(i) = active_pulse;
    end
    
    if (wt(i)>=0 && wt(i)<pi/3)     % 0<= wt <pi/3 --> P5
        P5(i) = active_pulse;
        P2(i) = 0;
    elseif (wt(i)>=pi/3 && wt(i)<4*pi/3)    % pi/3<= wt <4pi/3 --> P2
        P5(i) = 0;
        P2(i) = active_pulse;
    elseif (wt(i)>=4*pi/3 && wt(i)<=2*pi)   % 4pi/3<= wt <=2pi --> P5
        P5(i) = active_pulse;
        P2(i) = 0;
    end
    
end

% figure()
% subplot(2,1,1)
% plot(t,P1,'LineWidth',1)
% title('P1')
% subplot(2,1,2)
% plot(t,P4,'LineWidth',1)
% title('P4')
%
% figure()
% subplot(2,1,1)
% plot(t,P3,'LineWidth',1)
% title('P3')
% subplot(2,1,2)
% plot(t,P6,'LineWidth',1)
% title('P6')
%
% figure()
% subplot(2,1,1)
% plot(t,P2,'LineWidth',1)
% title('P2')
% subplot(2,1,2)
% plot(t,P5,'LineWidth',1)
% title('P5')

% Initialization of helping matrices (voltages)
VAo = zeros(size(t));
VBo = zeros(size(t));
VCo = zeros(size(t));
VAB = zeros(size(t));
VCA = zeros(size(t));
VBC = zeros(size(t));
VAn = zeros(size(t));
VBn = zeros(size(t));
VCn = zeros(size(t));

% Computation of voltages in each switching element
for i=1:size(t,2)
    
    if (P1(i) == active_pulse)
        VAo(i) = Vdc;
    elseif ( P4(i) == active_pulse)
        VAo(i) = 0;
    end
    
    if (P3(i) == active_pulse)
        VBo(i) = Vdc;
    elseif ( P6(i) == active_pulse)
        VBo(i) = 0;
    end
    
    if (P5(i) == active_pulse)
        VCo(i) = Vdc;
    elseif (P2(i) == active_pulse)
        VCo(i) = 0;
    end
    
end

figure()
subplot(3,1,1)
plot(omega_t,VAo,'LineWidth',1)
title('V_{Ao}')
xlabel('\omega (rad/s)')
ylabel('V_{Ao} (V)');
xticks(0:pi:4*pi);
axis([0 4*pi -10 110])
grid on

subplot(3,1,2)
plot(omega_t,VBo,'LineWidth',1)
title('VBo')
xlabel('\omega (rad/s)')
ylabel('V_{Bo} (V)');
xticks(0:pi:4*pi);
axis([0 4*pi -10 110])
grid on

subplot(3,1,3)
plot(omega_t,VCo,'LineWidth',1)
title('VCo')
xlabel('\omega (rad/s)')
ylabel('V_{Co} (V)');
xticks(0:pi:4*pi);
axis([0 4*pi -10 110])
grid on

% Caluclation of polar voltages
VAB = VAo - VBo;
VCA = VCo - VAo;
VBC = VBo - VCo;

% Caluclation of line voltages
VAn = (VAB - VCA) / 3;
VBn = (VBC - VAB) / 3;
VCn = (VCA - VBC) / 3;

% Figures VAB,VAn
figure()
subplot(1,2,1);
plot(omega_t,VAB,'LineWidth',1)
title('Polar Voltage V_{AB}')
xlabel('\omega (rad/s)')
ylabel('V_{AB} (V)');
xticks(0:pi:4*pi);
axis([0 4*pi -110 110])
grid on

subplot(1,2,2);
plot(omega_t,VAn,'LineWidth',1)
title('Line Voltage V_{An}')
xlabel('\omega (rad/s)')
ylabel('V_{An} (V)');
xticks(0:pi:4*pi);
axis([0 4*pi -80 80])
grid on

% Figures VCA,VCn
figure()
subplot(1,2,1);
plot(omega_t,VCA,'LineWidth',1)
title('Polar Voltage V_{CA}')
xlabel('\omega (rad/s)')
ylabel('V_{CA} (V)');
xticks(0:pi:4*pi);
axis([0 4*pi -110 110])
grid on

subplot(1,2,2);
plot(omega_t,VCn,'LineWidth',1)
title('Line Voltage V_{Cn}')
xlabel('\omega (rad/s)')
ylabel('V_{Cn} (V)');
xticks(0:pi:4*pi);
axis([0 4*pi -80 80])
grid on

% Figures VBC,VBn
figure()
subplot(1,2,1);
plot(omega_t,VBC,'LineWidth',1)
title('Polar Voltage V_{BC}')
xlabel('\omega (rad/s)')
ylabel('V_{BC} (V)');
xticks(0:pi:4*pi);
axis([0 4*pi -110 110])
grid on

subplot(1,2,2);
plot(omega_t,VBn,'LineWidth',1)
title('Line Voltage V_{Bn}')
xlabel('\omega (rad/s)')
ylabel('V_{Bn} (V)');
xticks(0:pi:4*pi);
axis([0 4*pi -80 80])
grid on

% Initialization of helping matrices (currents)
IAn = zeros(1, length(t))
IBn = zeros(1, length(t))
ICn = zeros(1, length(t))
I_Q1 = zeros(1, length(t))
I_Q2 = zeros(1, length(t))
I_Q3 = zeros(1, length(t))
I_Q4 = zeros(1, length(t))
I_Q5 = zeros(1, length(t))
I_Q6 = zeros(1, length(t))
I_D1 = zeros(1, length(t))
I_D2 = zeros(1, length(t))
I_D3 = zeros(1, length(t))
I_D4 = zeros(1, length(t))
I_D5 = zeros(1, length(t))
I_D6 = zeros(1, length(t))

% System's parameters in space state
A = -R/L;
A_3 = -R/L;
B_3 = 1/L;
C_3 = 1;
D_3 = 0;

% System in space state
sys_3 = ss(A_3,B_3,C_3,D_3);
% Discrete system
sys_3_discrete = c2d(sys_3, DT);

for i=1:size(t,2)

    % Compute load's current in each phase
    IAn(i+1) = sys_3_discrete.A*IAn(i) + sys_3_discrete.B*VAn(i);
    IBn(i+1) = sys_3_discrete.A*IBn(i) + sys_3_discrete.B*VBn(i);
    ICn(i+1) = sys_3_discrete.A*ICn(i) + sys_3_discrete.B*VCn(i);



% Find each transistor's and diode's current
    % When the current is negative, we invert it
    % For phase a
    if( IAn(i)>0 && VAn(i)>0 )
        I_Q1(i) = IAn(i);
        %The rest remain zero
    elseif ( IAn(i)>0 && VAn(i)<0 )
        I_D4(i) = IAn(i);
        %The rest remain zero
    elseif ( IAn(i)<0 && VAn(i)<0 )
        I_Q4(i) = -IAn(i);
        %The rest remain zero
    elseif ( IAn(i)<0 && VAn(i)>0 )
        I_D1(i) = -IAn(i);
        %The rest remain zero
    end
    
    % For phase b
    if( IBn(i)>0 && VBn(i)>0 )
        I_Q3(i) = IBn(i);
        %The rest remain zero
    elseif ( IBn(i)>0 && VBn(i)<0 )
        I_D6(i) = IBn(i);
        %The rest remain zero
    elseif ( IBn(i)<0 && VBn(i)<0 )
        I_Q6(i) = -IBn(i);
        %The rest remain zero
    elseif ( IBn(i)<0 && VBn(i)>0 )
        I_D3(i) = -IBn(i);
        %The rest remain zero
    end
    
    % For phase c
    if( ICn(i)>0 && VCn(i)>0 )
        I_Q5(i) = ICn(i);
        %The rest remain zero
    elseif ( ICn(i)>0 && VCn(i)<0 )
        I_D2(i) = ICn(i);
        %The rest remain zero
    elseif ( ICn(i)<0 && VCn(i)<0 )
        I_Q2(i) = -ICn(i);
        %The rest remain zero
    elseif ( ICn(i)<0 && VCn(i)>0 )
        I_D5(i) = -ICn(i);
        %The rest remain zero
    end


end

 fifth_period_start_index = find(omega_t>=4*T, 1)-1;
fifth_period_end_index = find(omega_t>=5*T, 1);

figure()
subplot(3,1,1);
plot(omega_t,IAn(1:end-1),'LineWidth',1)
title('Load Current I_{An}')
ylabel('I_{An} (A)');
xticks(0:pi:4*pi);
axis([0 4*pi -10 10])
grid on

subplot(3,1,2);
plot(omega_t,IBn(1:end-1),'LineWidth',1)
title('Load Current I_{Bn}')
ylabel('I_{Bn} (A)');
xticks(0:pi:4*pi);
axis([0 4*pi -10 10])
grid on

subplot(3,1,3);
plot(omega_t,ICn(1:end-1),'LineWidth',1)
title('Load Current I_{Cn}')
xlabel('\omega (rad/s)')
ylabel('I_{Cn} (A)');
xticks(0:pi:4*pi);
axis([0 4*pi -10 10])
grid on

% Calculation of power in each phase
PoutA = (IAn(1:end-1).^2)*R;
PoutB = (IBn(1:end-1).^2)*R;
PoutC = (ICn(1:end-1).^2)*R;
figure()
plot(t,PoutC,'LineWidth',1)
title('Line C: Input Power');
grid on;
xlabel('time(s)');
ylabel('P_{out}(Watt)');

% Calculation of Semiconductors Current
figure();
subplot(6, 2, 1);
plot(t(fifth_period_start_index:fifth_period_end_index), ...
    I_Q1(fifth_period_start_index:fifth_period_end_index),'Linewidth', 1.5);
xlabel('$t$ (sec)','interpreter','latex');
ylabel('$I_{Q1}$ (A)', 'interpreter', 'latex');
title('Transistor Q1 current','interpreter','latex');
axis tight;
set(gca, 'FontSize', 12);


subplot(6, 2, 2);
plot(t(fifth_period_start_index:fifth_period_end_index), ...
    I_D1(fifth_period_start_index:fifth_period_end_index),'Linewidth', 1.5);
xlabel('$t$ (sec)','interpreter','latex');
ylabel('$I_{D1}$ (A)', 'interpreter', 'latex');
title('Diode D1 current','interpreter','latex');
axis tight;
set(gca, 'FontSize', 12);

subplot(6, 2, 3);
plot(t(fifth_period_start_index:fifth_period_end_index), ...
    I_Q2(fifth_period_start_index:fifth_period_end_index),'Linewidth', 1.5);
xlabel('$t$ (sec)','interpreter','latex');
ylabel('$I_{Q2}$ (A)', 'interpreter', 'latex');
title('Transistor Q2 current','interpreter','latex');
axis tight;
set(gca, 'FontSize', 12);

subplot(6, 2, 4);
plot(t(fifth_period_start_index:fifth_period_end_index), ...
    I_D2(fifth_period_start_index:fifth_period_end_index),'Linewidth', 1.5);
xlabel('$t$ (sec)','interpreter','latex');
ylabel('$I_{D2}$ (A)', 'interpreter', 'latex');
title('Diode D2 current','interpreter','latex');
axis tight;
set(gca, 'FontSize', 12);

subplot(6, 2, 5);
plot(t(fifth_period_start_index:fifth_period_end_index), ...
    I_Q3(fifth_period_start_index:fifth_period_end_index),'Linewidth', 1.5);
xlabel('$t$ (sec)','interpreter','latex');
ylabel('$I_{Q3}$ (A)', 'interpreter', 'latex');
title('Transistor Q3 current','interpreter','latex');
axis tight;
set(gca, 'FontSize', 12);

subplot(6, 2, 6);
plot(t(fifth_period_start_index:fifth_period_end_index), ...
    I_D3(fifth_period_start_index:fifth_period_end_index),'Linewidth', 1.5);
xlabel('$t$ (sec)','interpreter','latex');
ylabel('$I_{D3}$ (A)', 'interpreter', 'latex');
title('Diode D3 current','interpreter','latex');
axis tight;
set(gca, 'FontSize', 12);

subplot(6, 2, 7);
plot(t(fifth_period_start_index:fifth_period_end_index), ...
    I_Q4(fifth_period_start_index:fifth_period_end_index),'Linewidth', 1.5);
xlabel('$t$ (sec)','interpreter','latex');
ylabel('$I_{Q4}$ (A)', 'interpreter', 'latex');
title('Transistor Q4 current','interpreter','latex');
axis tight;
set(gca, 'FontSize', 12);

subplot(6, 2, 8);
plot(t(fifth_period_start_index:fifth_period_end_index), ...
    I_D4(fifth_period_start_index:fifth_period_end_index),'Linewidth', 1.5);
xlabel('$t$ (sec)','interpreter','latex');
ylabel('$I_{D4}$ (A)', 'interpreter', 'latex');
title('Diode D4 current','interpreter','latex');
axis tight;
set(gca, 'FontSize', 12);

subplot(6, 2, 9);
plot(t(fifth_period_start_index:fifth_period_end_index), ...
    I_Q5(fifth_period_start_index:fifth_period_end_index),'Linewidth', 1.5);
xlabel('$t$ (sec)','interpreter','latex');
ylabel('$I_{Q5}$ (A)', 'interpreter', 'latex');
title('Transistor Q5 current','interpreter','latex');
axis tight;
set(gca, 'FontSize', 12);

subplot(6, 2, 10);
plot(t(fifth_period_start_index:fifth_period_end_index), ...
    I_D5(fifth_period_start_index:fifth_period_end_index),'Linewidth', 1.5);
xlabel('$t$ (sec)','interpreter','latex');
ylabel('$I_{D5}$ (A)', 'interpreter', 'latex');
title('Diode D5 current','interpreter','latex');
axis tight;
set(gca, 'FontSize', 12);

subplot(6, 2, 11);
plot(t(fifth_period_start_index:fifth_period_end_index), ...
    I_Q6(fifth_period_start_index:fifth_period_end_index),'Linewidth', 1.5);
xlabel('$t$ (sec)','interpreter','latex');
ylabel('$I_{Q6}$ (A)', 'interpreter', 'latex');
title('Transistor Q6 current','interpreter','latex');
axis tight;
set(gca, 'FontSize', 12);

subplot(6, 2, 12);
plot(t(fifth_period_start_index:fifth_period_end_index), ...
    I_D6(fifth_period_start_index:fifth_period_end_index),'Linewidth', 1.5);
xlabel('$t$ (sec)','interpreter','latex');
ylabel('$I_{D6}$ (A)', 'interpreter', 'latex');
title('Diode D6 current','interpreter','latex');
axis tight;
set(gca, 'FontSize', 12);

% /------------------------/Q.3.B/------------------------/
NFFT = 1000;
L1 = NFFT/2;  %Length of signal

% Calulation of Instantaneous Power
p3_1phase = (VCn.*ICn(1:end-1));
% Calculation of active power
P3_1phase = mean(p3_1phase((n-1)*1000+1:end));
% Voltage rms value in phase A
V3rms = sqrt(sum(VCn(1:NFFT).^2)/L1);
% Current rms value in phase A
I3rms = sqrt(sum(ICn(1:NFFT).^2)/L1);
% Calculation of Apparent Power
S3_1phase = V3rms * I3rms;
% Calculation of power factor
PF_3 = P3_1phase/S3_1phase;
disp('Power Factor in each phase:');
disp(PF_3);

F = (1/DT)/2*linspace(0,1,L1+1);    % Frequency axis
VCnF = fft(VCn,NFFT);                   % Fourier transformation

%Plot single-sided amplitude spectrum of VAn.
figure();
stem(F,abs(VCnF(1:L1+1)));
title('Phase C:Voltage Harmonic')
xlabel('Frequency (Hz)')
ylabel('Fourier of V_{Cn}');
grid on
axis([0 0.3*(10^4) 0 3.5*(10^4)])