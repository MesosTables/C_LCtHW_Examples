#include <stdio.h>

// if/else statements

int main ()
{
int x=10;
int y= 50;
int z = 100;

if (x != y)
	{
	printf("%i, is not equal to %i\n", x, y);
	}

if (x>y || y<z)
	{
	printf("Boo!!!!!!!\n");
	}

if (x>y && y<z)
	{
	printf("Boo!!!!!!!\n");
	}
	
return 0;
}