#include <stdio.h>
//actually part 2

void recTest (int i)
{
	if(i>0)	
		{
		recTest(i-1); // calls recTest again until you get down to 0
		printf("%i\n", i); // this is popping a stack
//the output will print 1-5. this had to wait for the recursive call of
// recTest to finish until it could print the assigned values of i.
// 5 dreams of 4, 4 > 3; 3>2; 2>1; 1>0 - 0 causes recTest to stop; then
// 1 prints > 2 > 3 > 4 > 5
		}
}

int main ()
{
	recTest(5);

	return 0;
}