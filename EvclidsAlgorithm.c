#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    
    printf("enter x\n");
    scanf("%d", &x);
    
    printf("\nenter y\n");
    scanf("%d", &y);

    while(x != y)
        {
            if(x < y)
                {
                    y = y - x;
                }
            else
                {
                    x = x - y;
                }
        }
    if(x == y)
        {
            printf("the end: x = %d, y = %d", x, y);
        }
    return 0;
}
