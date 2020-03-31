#include <stdio.h>
#include <math.h>

int main()
{
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    
    c = sqrt(a * a +  b * b);
    
    printf("\na2 = %.2f\nb2 = %.2f\nc2 = %.2f\n\nc = %.2f", a * a, b * b, c * c, c);
    
    return 0;
}