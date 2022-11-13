#include <stdio.h>

void
main ()
{
  int counter = 0;
  int noOfSubjects;
  int average;
  float grade = 0, sum = 0, ave = 0;

  printf ("Number of Subjects: ");
  scanf ("%d", &noOfSubjects);

  while (counter < noOfSubjects)
    {
      counter++;
      printf ("Enter Grade: ");
      scanf ("%f", &grade);
      sum = sum + grade;
    }
  ave = sum / noOfSubjects;
  average = ave * 10;
  printf ("The average is %d\n", average);

  switch ((int) average)
    {
    case 10 ... 15:
      printf ("Grade: A");
      break;
    case 16 ... 20:
      printf ("Grade: B");
      break;
    case 21 ... 25:
      printf ("Grade: C");
      break;
    case 26 ... 30:
      printf ("Grade: D");
      break;
    case 31 ... 50:
      printf ("Grade: F");
      break;
    default:
      printf ("Grade: Invalid");
      break;
    }
}
