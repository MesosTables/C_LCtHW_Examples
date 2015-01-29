#include <stdio.h>

void printGlobalValue();
char c = 'A'; //global variable

int main ()
{
	putchar (c); putchar ('\n');
	printGlobalValue();
	
	return 0;
}

void printGlobalValue()
{
	putchar(c); putchar('\n');
}