#include <stdio.h>

int main ()
{
	char firstName[5]; 
	char lastName[5];
	// these arrays can only hold up to 4 characters as the 5th character
	// is reserved for the null character
	
	printf("First name: ");
	scanf("%s", firstName);
	printf("Last name: ");
	scanf("%s", lastName);
	printf("Hello %s %s\n", firstName, lastName);
	
	char firstName1[5]; 
	char lastName1[5];
	
	printf("\n");
	printf("Enter your first and last name: ");
	scanf("%s %s", firstName1, lastName1); 
	//this will assume 2 parameters coming in, separated by a space
	printf("Hello %s %s\n", firstName1, lastName1);
	
	printf("\n");
	
	int x, y, z;
	printf("Enter first number: ");
	scanf("%d", &x);
	printf("Enter the second number: ");
	scanf("%d", &y);
	z = x+y;
	printf("%d + %d = %d", x, y, z);
	
	return 0;
}
