#include <stdio.h>
#include <string.h>

int main ()
{
	char str1 [255];
	char str2 [255];
	printf("enter str1: "); gets(str1);
// this assigns a memory location to whatever the user inputs
	printf("enter str2: "); gets(str2);
	
	if (str1 == str2)
		printf("Strings are equal!");
	else
		printf("Strings are NOT equal!");
	putchar('\n');
	
	if (strcmp(str1, str2)==0) // this is a <string.h> function compares
// the value of the strings - case sensitive
		printf("Strings are equal!");
	else
		printf("Strings are NOT equal!");
	putchar('\n');

return 0;
}