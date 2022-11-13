#include <stdio.h>
#include <stdio.h>
int main()
{
float a,b;
char c;
    printf("Sample Calculator \n");
    printf("Problem: ");
    scanf("%f%c%f",&a,&c,&b);
    switch(c)
    {
    case '+':
     printf("TOTAL: %.2f",a+b);
    break;
    case '-':
     printf("TOTAL: %.2f",a-b);
    break;
    case '*':
     printf("TOTAL: %.2f",a*b);
    break;
    case '/':
     printf("TOTAL: %.2f",a/b);
    break;
    default:
     printf("ERROR");
    }
}
