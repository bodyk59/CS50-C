#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int  height;
    string brick = "#";
    int  initial = 0;
    
    printf("Height: ");
    height = GetInt();
    

    if (height < 0 || height > 23)
    {
        printf("Height: ");
        height = GetInt();
    }
    else
    {
        while (height > initial)
        {
        
            for (int i = initial; i < height - 1; i++)
            {
                printf("%s", " ");
            }

            for (int i = 0; i < initial + 2; i++)
            {
                printf("%s", brick);   
            }

            printf("\n");
            initial++;
        }
    }
}
