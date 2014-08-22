#include <stdio.h>

int main (int argc, char *argv[])
{
	int i =0;
	int count = 0;
	
	for(i = 1; i<argc; i++)
	{
		count++;
	}
	
	if (argc == 1)
	{
		printf("You forgot to put a line in argument\n");
	}
	else if(count>0 && count < 4 )
	{
		printf("Your argument number is correct. They are:\n");
		for(i = 1; i<=count; i++)
		{
			printf("arg %d: %s\n", i, argv[i]);
		}
	}
	else
	{
		printf("Not the correct number of arguments\n");
	}
	
	return 0;
}