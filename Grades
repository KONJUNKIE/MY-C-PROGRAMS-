#include <stdio.h>

int main ()
{
  double grade1st, grade2nd, grade3rd, grade4th, grade5th, average;

  printf ("Input the 5 grades: \n");
  scanf ("%lf\n %lf\n %lf\n %lf\n %lf", &grade1st, &grade2nd, &grade3rd, &grade4th, &grade5th);

  average = (grade1st + grade2nd + grade3rd + grade4th + grade5th) / 5;
  printf ("The average grade is: %.1lf", average);

  if (average >= 1.0 && average <= 1.5)
    printf ("Grade: A");
  else if (average >= 1.6 && average <= 2.0)
    printf ("Grade: B");
  else if (average >= 2.1 && average <= 2.5)
    printf ("Grade: C");
  else if (average >= 2.6 && average <= 3.0)
    printf ("Grade: D");
  else if (average >= 3.1 && average <= 5.0)
    printf ("Grade: F");
  else
    printf ("\nThe average grade is Invalid");

  return 0;
}
