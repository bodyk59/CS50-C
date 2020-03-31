#include <stdio.h>
#include <cs50.h>

int main(void)
{
    double n;
    printf("How much change is owed?\n");
    n = GetDouble();
    int coin = n * 100;
  
    
    // variables for marking the coins
    int quarter;
    int dime;
    int nickel;
    int penny;
    
    // have to think about this cycle
   
    {
        if (n > 0)
        {
            do
            {
                // to define quantity of coins
                quarter = coin / 25;
                dime = (coin - (25 * quarter)) / 10;
                nickel = (coin - (25 * quarter) - (10 * dime)) / 5;
                penny = (coin - (25 * quarter) - (10 * dime) - (5 * nickel)) / 1;
            }
            while (coin == 0);
            printf("%d\n", quarter + dime + nickel + penny);
       
        }
        else
        {
            
            do 
            {
                printf("How much change is owed?\n");
                n = GetFloat();
            }
            while (n <= 0);
            
        }
    }
   
}
