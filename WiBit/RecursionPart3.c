#include <stdio.h>

int n = 0;

int getFact(int i)
{
	if(i>1)
	{
		n = i * getFact(i-1);
		return n;
	}
	else
		return 1;
}

int main ()
{
	int i = 0;
	printf("Please pick a number: ");
	scanf("%d", &i);
	getFact(i);
	printf("The factorial of the %d you selected is %d", i, n);
	return 0;

}