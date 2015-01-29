#include <stdio.h>

// switch statments

int main ()
{
	int num1 = 100;
	switch (num1)
	{
		case 50:
			printf("The value is 50\n");
		break;
		case 100:
			printf("The value is 100\n");
		break;
		default:
			printf("The value is not 50 and not 100\n");
		break;
	}
int num2 = 200;
	switch (num2)
	{
		case 50:
			printf("The value is 50\n");
		break;
		case 100:
			printf("The value is 100\n");
		break;
		default:
			printf("The value is not 50 and not 100\n");
		break;
	}
int num3 = 100;
	switch (num3)
	{
		case 50:
			printf("The value is 50\n");
		break;
		case 100:
			printf("The value is 100\n");
		case 200:
			printf("The value is 200\n");
		default:
			printf("The value is not 50 and not 100\n");
		break;
	}	
	
return 0;
}