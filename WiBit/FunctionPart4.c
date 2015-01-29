#include <stdio.h>

void myFunction(int*);

int main ()
{
	int n = 50;
	myFunction(&n); //pass the pointer value
	printf("%i\n", n); 
	return 0;
}

void myFunction(int *number)
{
	*number= *number + 100;
}
