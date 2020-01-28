function lisazu_fun_anim(f1,f2)
% funkcija zime Lisazu figuras
% mainisim f1,f2 - iegusim dazadas figuras
% call:
% lisazu_fun(c1,c2)
t=0:0.01:1;
% f1=2; f2=3;
for i = 0:pi/100:2*pi
    x=cos(2*pi*f1*t+i);
    y=sin(2*pi*f2*t);
    plot(x,y)
    pause(0.01)
end
shg