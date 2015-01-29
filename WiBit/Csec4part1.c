#include <stdio.h>

int main ()
{
	putchar ('A');
	putchar ('B');

	puts ("\nThis is puts first line");
	puts ("The 2nd line for puts");

	printf ("Word or 2");
	printf (" still the same line\n");
	printf ("this should be the new line\n");
	printf("passing a string here: %s\n", "hello");
	printf("adding another line for fun\n");
	
	return 0;
}