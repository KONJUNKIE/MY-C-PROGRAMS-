#include <stdio.h>

int
main ()
{
  int age;
  double largenumber;
  float smallnumber;
  char character;

  printf ("intsize: %zu", sizeof (age));
  printf ("\ndoublesize: %zu", sizeof (largenumber));
  printf ("\nfloatsize: %zu", sizeof (smallnumber));
  printf ("\ncharsize: %zu", sizeof (character));

  return 0;
}
