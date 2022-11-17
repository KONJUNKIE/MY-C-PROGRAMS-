/******************************************************************************
Name: Clint Joseph S. Ubanan

C program that accepts a number n, and determine if the number n is a prime number.
******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i;
    int count = 0;
    
    while(i)
    {
        printf("Input a number => ");
        scanf("%d",&n);
        
        if(n == 1 || n == 0)
        {
            printf("The number %d is neither prime nor composite",n);
        }
        
        for(i = 2; i <= n; i++)
            {
                if(n % i == 0)
                    count++;
            }
        if(count == 1)
        {
            printf("The number %d is a Prime number",n);
        }
        else
        {
            printf("The number %d is not a Prime number",n);
        }
        
        printf("\n");
    }
    
    return 0;
}
