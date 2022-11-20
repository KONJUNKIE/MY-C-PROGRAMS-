#include <stdio.h>

int main()
{
    double a,b;
    char c,answer;
    
    do
    {
     printf("\nCalculator");
     printf("\nProblem: ");
     scanf("%lf%c%lf",&a,&c,&b);
    
     switch(c)
     {
     case '+':
        printf("Answer = %.2f",a+b);break;
     case '-':
        printf("Answer = %.2f",a-b);break;
     case '*':
        printf("Answer = %.2f",a*b);break;
     case '/':
        printf("Answer = %.2f",a/b);break;
     default:
        printf("Error/Invalid Problem");break;
     }
     
     printf("\n");
     
      do
      {
        printf("\nWould you like to try again? y/n: ");
        scanf("%s",&answer);
      }
      while (answer != 'y' && answer != 'n');
     
    }while (answer == 'y');
    
    return 0;
}


