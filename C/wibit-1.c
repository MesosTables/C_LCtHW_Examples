#include <stdio.h>

int main (char argc, char *argv[])
{
	int x =4;
	int y =1;
	float z = y/x;
	float tcZ = (float)y/(float)x;
	
	puts("string and stuff with a built in newline - puts");
	puts("new line");
	printf("printf string");
	printf(", no new line\n");
	
	puts("");
	puts("show some type casting:");
	printf("one divided by four is %.2f\n", z);
	printf("one divided by four is %.2f - typecast", tcZ);
	
	return 0;
}