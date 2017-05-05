function eleprint(a)

%    i = 1;
%    while i<=4
%        disp(x(i))
%        i = i + 1;
%    end

%    for j=1:length(x)
%        disp (x(j))
%    end
    
%    x = [];
%    i = 1;
%    for k=0:5:100
%        x(i) = k;
%        i = i + 1;
%    end

%    disp(x)


    x = [];
    j = 1;
    for i=1:length(a)
           if a(i) < 0.5
                x(j) = a(i);
                j = j + 1;
           end
    end

    disp(x)

end