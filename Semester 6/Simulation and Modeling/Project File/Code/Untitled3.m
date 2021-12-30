%this project for mote carlo and this project will create a different
%shapes.
clc
inside = 0;
nmax = 10000;
for n = 1:nmax
    x = rand; % this rand function will generate a ramdon valyhe and assign to the variable to x 
    y = rand; % Same stoey as the variable x.
    x1=x-0.5; % this par is for dividing nad for partitation 
    y1=y-0.5; 
    if sqrt(x1+y1) <= 5 % this sqrt function will return the square root of each function this <= in metlab means that x+y is less than 0.1 this 0.1 will represent the ratio of slip. 
      plot(x1,y1,'r.'); % this b will represent the colur blue
      inside = inside + 1;  % this is increment so the loop can work and will continue to work until the lop is ended
    else
      plot(x1,y1,'b.'); % this r will represent the red color
    end      
    hold on;
end
hold off;
area = 1/2 * sin(x);  % the data will be shown in an triangle pattern ;
