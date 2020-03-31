#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0, 
        b = 0, 
        c = 0;
    int D;
    
    printf("Enter a, b, c\n");

    printf("a = ");
    scanf("%d", &a);
    
    printf("b = ");
    scanf("%d", &b);
    
    printf("c = ");
    scanf("%d", &c);
    
    D = b * b - 4 * a * c;
    
    if(D > 0)
    {
        int x1, x2;
        
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        
        printf("\nD = %d", D);
        printf("\nx1 = %d\nx2 = %d", x1, x2);
        
        return 0;
    }
    
    if(D == 0)
    {
        int x;
        
        x = - (b / 2 * a);
        
        printf("\nD = %d", D);
        printf("\nx = %d", x);
        
        return 0;
    }
    else
    {
        printf("\nD = %d", D);
        printf("\nEquation doesn`t has any solutions!");
        
        return 0;
    }
    
    return 0;
}