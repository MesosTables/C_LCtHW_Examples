#include <stdio.h>
#include <stdarg.h>
//includes preproccessor macros that are desgined to work with functions
//that have multiple parameters

int calculateTotal(int n, ...)
{
	va_list arguments; 
//variable argument list stores list of number of arguments
	va_start (arguments, n);
//variable argument start prepares for the que
	int i, localTotal = 0;
	
	for (i=0; i<n; i++)
	{
		int currentArgument = va_arg (arguments, int);
// va_arg will get next argument
		localTotal += currentArgument;
	}
	va_end(arguments);
//this will end the arguments
	return localTotal;

}

int main ()
{
	int total = calculateTotal(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	printf("%d\n", total); //returns 55

return 0;
}