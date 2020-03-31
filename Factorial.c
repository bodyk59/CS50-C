#include <stdio.h>

int main()
{   
    int n;
    int result = 1;
   
    printf("Enter n: \n");
    scanf("%d", &n);
    
    if(n < 0)
        printf("Factorial does not exist!");
    else
        for(int i = 1; i <= n; i++)
        {
            result = result * i;
        }
    printf("n! = %d", result);
    
    return 0;
}