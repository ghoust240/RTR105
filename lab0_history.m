%-- 01/28/2020 02:40:06 PM --%
mkdir lab0
cd lab0
a = 1
b = 2
c = a+b
A = [1 2 ; 3 4]
B = A*A
C = A.*A
diary lab0_diary.m
% Uzzimesim otras karta polinomu
% polinoma koeficenti:
C = [2 3 10]
x = -6:2:6
x = -6:2:6;
% sakum elements:solis:beigu_elements
y = C(1)*x.^2+C(2)*x+C(3)
% uzzimesim
plot(x,y)
x2=-6:0.1:6;
plot(x2,y)
plot(x,y)
y2=C(1)*x.^2+C(2)*x+C(3)
plot(x2,y2)
x2 = -6:0.1:6
plot(x2,y2)
x2=-6:0.01:6;
plot(x2,y2)
x2=-6:0.01:6;
plot(x2,y2)
plot(x,y)
x2 = -6:0.01:6;
plot(x,y)
plot(x2,y2)
y2 = C(1)*x2.^2+C(2)*x2+C(3)
plot(x2,y2)
% linijas izskata maina
% krasa
plot(x2,y2,'g')
plot(x2,y2,'o')
plot(x2,y2,'--')
help plot
plot(x2,y2,'d')
plot(x2,y2,'v')
plot(x2,y2,'h')
plot(x2,y2,'*')
plot(x2,y2,'-.')
plot(x2,y2,':')
plot(x2,y2,'-')
plot(x2,y2,'d')
plot(x2,y2,'-')
my_plot(x,y)
close all
%% ka zimet vairakas liknes
plot(x2,y2,x,y)
%% ja x ir vienads
plot(x,[y' -y'])
plot(x,y,'o',x2,y2)
stem(x,y)
stairs(x,y)
bar(x,y)
%% ka zimet vairakas liknes
plot(x2,y2)
plot(x2,y2)
hold on
plot(x,y)
stairs(x,y)
hold off\
hold off
%% lisazu figuras zimesana
% parametriskie grafiki
edit
help lisazu
lisazu
lisazu_fun
lisazu_fun(1,2)
lisazu_fun_anim(1,2)
lisazu_fun_anim(2,3)
lisazu_fun_anim(2.3,3)
lisazu_fun_anim(2.3,3.2)
lisazu_fun_anim(8.2,5.4)
lisazu_fun_anim(420,1337)
lisazu_fun_anim(1337,1337)
lisazu_fun_anim(1201,3252)
diary off
%-- 01/28/2020 04:01:58 PM --%