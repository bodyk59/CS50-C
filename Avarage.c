#include <stdio.h>

int main()
{
    int x = 0;
    
    printf("How much numbers will be here: ");
    scanf("%d", &x);
    
    int numbers[x];
    unsigned int count = x;
    long sum = 0L;
    float avarage = 0.0f;
    
    printf("Enter numbers: \n");
    
    for(unsigned int i = 0; i < count; ++i)
    {
        printf("%2u> ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    avarage = (float)sum / count;
    
    printf("avarage = %.2f", avarage);
    
    return 0;
}