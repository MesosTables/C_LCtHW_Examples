#include <stdio.h>

// loop keywords

int main ()
{
int i = -1;

/* this while statement will print out even numbers 2-? 
whatever you set the variable i to */
while (i<5)
	{
	i++;
	if ((i % 2 == 1) || (i==0))
		{
		continue; 
// this causes the loop to start over if the "if" statement is found true
		}
		
	printf ("%d\n", i);
	}

return 0;
}