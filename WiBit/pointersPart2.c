#include <stdio.h>

int main()
{
	int value =1234;
	int * n;
	n = &value; // this will set n to point to same address of the memory
	// location of value
	//setting the pointer value
	printf("value = %i\n", value);
	printf("n = %i\n", *n);
	
	int val = 1234;
	int *v;
	v = &val; // this will set n to point to same address of the memory
	// location of value
	*v=*v+1; // store in the value of n store value of n+1
	//once this value is changed when the memory address is called again
	// the values will be increased by 1
	printf("value = %i\n", val);
	printf("n = %i\n", *v);
	
	//the next two will print the memory location not the value
	printf("value's memory location = %i\n", &val);
	printf("n's memory location = %i\n", v);
	
	
return 0;
}