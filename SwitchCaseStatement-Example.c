#include <stdio.h>
int
main ()
{
  int a, b, c, d, e;
  float sum, average;

  printf ("Input 5 Grades: \n");
  scanf ("%d\n %d\n %d\n %d\n %d", &a, &b, &c, &d, &e);
  sum = a + b + c + d + e;
  average = sum / 5;
  printf ("\nsum = %.2f\n", sum);
  printf ("Average = %.2f\n", average);

  switch ((int) average)
    {
    case 96 ... 100:
      printf ("The average Grade is A\n");
      break;
    case 91 ... 95:
      printf ("The average Grade is B\n");
      break;
    case 86 ... 90:
      printf ("The average Grade is C\n");
      break;
    case 81 ... 85:
      printf ("The average Grade is D\n");
      break;
    case 75 ... 80:
      printf ("The average Grade is E\n");
      break;
    case 60 ... 74:
      printf ("The average Grade is F\n");
      break;
    default:
      printf ("The average Grade is Invalid\n");
      break;
    }
  return 0;
}
