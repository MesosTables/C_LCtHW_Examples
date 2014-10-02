#include <stdio.h>

int main(int argc, char * argv[])
{
//&variableName shows the value of the space in memory
//to assign a value to a pointer must assign value address = pointer
	int n = 20;
	int *nPtr = &n;
	
	printf("Line 1 %d\n",*nPtr);
	printf("Line 2 %d\n",nPtr);
	printf("Line 3 %d\n",&nPtr);
	printf("Line 4 %d\n",n);
	printf("Line 5 %d\n",&n);
	
	return 0;
}