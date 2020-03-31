#include <stdio.h>

int main()
{
    double x1 = 0.0;
    printf("1> ");
    scanf("%lf", &x1);

    if(x1 >= -1.61803 && x1 <= 1.61803)
    {
        int k = 2;
        double xk = 0.0;
        
        xk = 1 - x1 * x1;
        
        printf("%d> %lf\n", k, xk);
        
        for(k = 3; k <= 20; ++k)
        {
            double y;
            y = xk;
            
            xk = 1 - y * y;
            
            printf("%d> %lf\n", k, xk);
        }
    }
    else
    printf("x doesn`t meet requirements");
    
    return 0;
}