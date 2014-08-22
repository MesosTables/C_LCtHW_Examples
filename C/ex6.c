#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double superPower = 56789.4532;
	char initial = 'W';
	char firstName[]= "Carson";
	char lastName[] ="Brown";
	
	printf("You are %d miles away\n", distance);
	printf("You have %f level of power \n", power);
	printf("You have %f SUPER power\n", superPower);
	printf("\t%%\n");
	printf("My whole name is %s %c %s\n", firstName, initial, lastName);
	printf("Hexadecimal %x\n", distance);
	
	return 0;

}