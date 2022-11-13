/******************************************************************************
A C program to generate a multiplication table using nested for loop.
******************************************************************************/
#include <stdio.h>

int
main ()
{
  int n;
  unsigned int answer = 1;	// Answer = 1 means repeat the program.

  do
    {
      printf ("Input the prefered size of the table: ");	// The program will ask the
      scanf ("%d", &n);		// user to input the prefered size.

      for (int i = 1; i <= n; i++)	// This will fill the values in the table.
	{
	  for (int j = 1; j <= n; j++)
	    {
	      printf ("%4d", i * j);	// This will print the Multiplication Table.
	    }
	  printf ("\n");
	}

      printf ("\nDo you want to try again? (1 = Yes/0 = No) ");	// The program will ask the user if the
      scanf ("%u", &answer);	// user wants to try again.

    }
  while (answer != 0);

  return 0;
}
