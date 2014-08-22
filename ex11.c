#include <stdio.h>

int main (int argc, char *argv[])
{
	int i = 0;
	
	while(i<argc)
	{
		printf("arg %d: %s\n", i,argv[i]);
		i++;
	}
	
	char *states[] = {"NC", "SC", "CA", "MA"};
	
	int n = 4;
	i =0;
	
	while(i<n)
	{
		printf("state %d: %s\n", i, states[i]);
		i++;
	}
	
	i=0;
	while (i<n)
	{
		states[i] = argv[i];
		printf("state %d: %s\n", i, states[i]);
		i++;
	}
	
	return 0;
}