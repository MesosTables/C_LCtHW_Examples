#include <stdio.h>

int main ()
{
	char favColor[20];
	printf("What is your favorite color? ");
	gets(favColor);
	printf("\nYour favorite color is: %s\n", favColor);

	return 0;
}