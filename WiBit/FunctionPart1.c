#include <stdio.h>

int addTwoNumbers(int, int); // function prototype - accepts two integers

int main()
{

	int x;
	int y;
	int z;
	
	printf("Enter in first number: ");
	scanf("%d", &x);
	
	printf("Enter in second number: ");
	scanf("%d", &y);
	
	printf("You entered in %i and %i\n", x ,y);
	
	z = addTwoNumbers(x, y); //implementation
	printf("%i + %i = %i\n", x, y, z);
	return 0;
	
}

int addTwoNumbers (int num1, int num2) //function definition
{
	return num1 + num2; // these variables declared in definition
}