#include <stdio.h>

void printStaticVariable();

int main ()
{
	for (int c = 0; c < 10 ; c++)
		printStaticVariable();
	
	return 0;
}

void printStaticVariable()
{
	static int i =0;
	//static variables retain their value in the scope for which they are
	//defined. This will print 0,1,2,...,10 instead of 0,0,0..,0
	printf("%d\n", i);
	i++;
}