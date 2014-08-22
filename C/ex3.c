//ex3: formatted printing

#include <stdio.h>
#include <string.h>

int main()
{
	int age = 10;
	int height = 72;
	char name[] = "Carson";
	float pizzaNumber = 1.5;
	
	printf("My age is %d\n", age);
	printf("I am %d inches\n", height);
	printf("Hi, my name is %s\n", name);
	printf("I can eat %f pizzas",pizzaNumber);
	
	return 0;
}