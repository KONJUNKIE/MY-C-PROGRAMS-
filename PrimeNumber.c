/******************************************************************************
C program that accepts a number n, and determine if the number n is a prime number.
******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    
    printf("Input a number => ");
    scanf("%d",&n);
    
    if(n == 1 || n == 0)
    {
        printf("The number %d is neither prime nor composite",n);
        return 0;
    }
    
    for(int i = 2; i <= n; i++)
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
    
    return 0;
}
