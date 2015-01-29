#include <stdio.h>

int main ()
{
	int u = 65;
	int l = 97;
	
	
	for(int i = l; i < (l+26); i++)
	printf("%d=%c\n", i , i);
	
	printf("\n\n\n");
	
	for(int i = u; i < (u+26); i++)
	printf("%d=%c\n", i , i); // this will print the ASC alphabet value
	// with the number value
	

	
	for(int i = l; i < (l+26); i++) /* this will print each lower case 
letter with a list of all uppercase letters, go to a new line and 
increment the the lower case letter once and print out all capital 
letters again*/
	{
		printf("%c ->", i);
		for (int j = u; j < (u + 26); j++)
			{
			if (j== (u+25))
				{
				printf("%c", j);
				}
			else
				{
				printf("%c,", j);
				}
			}
		printf("\n");
	}
	return 0;
}
