#include <stdio.h>
#include <string.h>

int main ()
{
	char str1[255];
	char str[255];
	char *split; 
	
	printf ("str1: "); gets(str1);
	strrev(str1);
// replaces the value contained in the string
	puts (str1);
	
	
	printf("str: "); gets(str);
	split = strtok(str, ", -");
	
//this will split where there is a ,
	while(split != NULL) // NULL is a pointer that points to nothing
	{
		puts(split);
		split = strtok(NULL, ",");
// creates a queue, each time you use NULL as the parameter prints next 
// value until the value is NULL
	}

return 0;
}