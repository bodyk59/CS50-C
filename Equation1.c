#include <stdio.h>

int main ()
{
    int k, m, n;
    
    printf("Enter m and n: \n");
    scanf("%d%d", &m, &n);
    
    for(k = 1; m <= k && k <= n; ++k)
        if((k * k + 2 * k + 7) % 3 == 0)
            printf("%d ", k);
    
    return 0;
}