#include <stdio.h>

int fibonacci(int);

int main ()
{
	int n =15;
	int i = 0;
	for (i=0; i<n;i++)
	{
		printf("%d ", fibonacci(i));
	}
	printf("\n");
	return 0;
}

int fibonacci(int num)
{
	if ((num==0) || (num==1))
		return num;
	else
		return fibonacci(num-1)+fibonacci(num-2);
		
	return 0;
}