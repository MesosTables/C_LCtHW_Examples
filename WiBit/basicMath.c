#include <stdio.h>

int main ()
{
	int x = 0;
	int y = 0;
	
	printf("x = %d\n", x++);
	printf("y = %d\n\n", ++y);
	
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	
	return 0;
}