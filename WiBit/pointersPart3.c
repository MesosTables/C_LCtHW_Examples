#include <stdio.h>

int main ()
{
int *p;
int n = 200;
*p=100;	

printf("Address [%p] = [%d]\n", p, *p); //%p is the memory location
printf("Address [%p] = [%d]\n", &n, n);

int value = 1234;

int *n1; int *n2; int *n3; int *n4; //pointers with no locations
n1 = &value;
n2 = n1; //n2 points to n1's memory address
n3=n2;
n4=n3;
printf("value = %i\n", value);
printf("n1 = %i\n", *n1);
printf("n2 = %i\n", *n2);
printf("n3 = %i\n", *n3);
printf("n4 = %i\n", *n4);

return 0;
}