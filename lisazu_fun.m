function lisazu_fun(f1,f2)
% funkcija zime Lisazu figuras
% mainisim f1,f2 - iegusim dazadas figuras
% call:
% lisazu_fun(c1,c2)
t=0:0.01:1;
% f1=2; f2=3;
x=cos(2*pi*f1*t);
y=sin(2*pi*f2*t);
plot(x,y)
shg