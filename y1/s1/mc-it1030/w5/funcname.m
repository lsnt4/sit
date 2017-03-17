function [i, j] = funcname(a, b, c)

    d = b^2 - 4*a*c;

    i = 0;
    j = 0;
    
    if (d > 0)
        i = ((-b) + sqrt(d))/2*a;
        j = ((-b) - sqrt(d))/2*a;
    elseif d==0
        disp('Only one solution')
        t = -b/(2*a);
    else
        disp('Error! No real roots')
    end
end