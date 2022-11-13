/******************************************************************************
A C program to generate a multiplication table using nested for loop.
******************************************************************************/
#include <stdio.h>

int
main ()
{
  int n;
  char answer;

  do
    {
      printf ("Input the prefered size of the table: "); // The program will ask the
      scanf ("%d", &n);		                         // user to input the prefered size.

      for (int i = 1; i <= n; i++)	// This will fill the values in the table.
	{
	  for (int j = 1; j <= n; j++)
	    {
	      printf ("%4d", i * j);	// This will print the Multiplication Table.
	    }
	  printf ("\n");
	}
      do
	{
	  printf ("\nDo you want to try again? (y/n) "); // The program will ask the user if the
	  scanf ("%s", &answer);	                 // user wants to try again.
	}
      while (answer != 'y' && answer != 'n');

    }
  while (answer == 'y');

  return 0;
}
