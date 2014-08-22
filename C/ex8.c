#include <stdio.h>

int main(int argc, char * argv[])
{
	int areas[] = {10, 12,13, 14,20};
	char name[] = "Zed";
	char fullName[] ={'Z','e','d',' ','S','m','i','t','h','\0'};
	
	printf("The size of an int : %ld bytes\n", sizeof(int));
	printf("The size of areas (int[]): %ld bytes\n", sizeof(areas));
	printf("The number of ints in areas (int[]): %ld\n", sizeof(areas)/sizeof(int));
	printf("The first element in areas array is %d and the second is %d\n", areas[0],areas[1]);
	
	printf("\n");
	
	printf("The size of an char : %ld bytes\n", sizeof(char));
	printf("The size of name (char[]): %ld bytes\n", sizeof(name));
	printf("The number of chars in name (int[]): %ld\n", sizeof(name)/sizeof(char));
	
	printf("\n");
	
	printf("The size of fullName (char[]): %ld bytes\n", sizeof(fullName));
	printf("The number of chars in fullName (int[]): %ld\n", sizeof(fullName)/sizeof(char));
	
	printf("\n");
	
	printf("First name is \"%s\" and Full name is \"%s\"", name, fullName);
	
	return 0;
}