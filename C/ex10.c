#include <stdio.h>

int main (int argc, char * argv[])
{
	char *states[] = {"NC", "SC", "WA", "CA"};
	int n = 4;
	
	states[1] =argv[2];
	
	// argv[0] stores the .exe
	//for each of the strings passed in through the console
	for(int i =1; i <argc; i++)
	{
		printf("arg %d = %s\n", i, argv[i]);
	}
	

	
	for(int i= 0; i<n; i++)
	{
		printf("states %d = %s\n", i+1, states[i]);
	}
	
	return 0;
}