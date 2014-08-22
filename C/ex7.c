#include <stdio.h>

int main (char argc, char *argv[])
{
	int bugs = 100;
	float bugRate = 1.2;
	
	printf("You have %d bugs at a rate of %f\n", bugs, bugRate);
	long universeDefects = 1L * 1024L * 1024L * 1024L;
	printf("You have %ld number of defects\n", universeDefects);
	double expectedBugs = bugs * bugRate;
	printf("There are going to be %.2f expected bugs\n", expectedBugs);
	
	double partUniverse = expectedBugs / universeDefects;
	printf("That is only a %e portion of the universe\n", partUniverse);
	
	char nulByte = '\0';
	int carePercent = bugs * nulByte;
	printf("Which means you should care %d%%.\n", carePercent);
	
	return 0;
}