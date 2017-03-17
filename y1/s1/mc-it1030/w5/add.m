function add(x, y)

    lx = length(x);
    ly = length(y);
    sx = size(x);
    sy = size(y);
    
    [r1, c1] = size(x)
    [r2, c2] = size(y)

    if (lx == ly & sx == sy ) 
        
        if (r1 == r2)
           result = x + y;
        else
            disp('Rows are mismatched')
        end
    else
        disp('Error')
    end

end