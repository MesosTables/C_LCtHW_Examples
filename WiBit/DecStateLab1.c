#include <stdio.h>

// show control structures at work

int main ()
{
	int x = 9;
	int y = 6;
	char c = 'h';
	
	if (y == 7 || x < 10)
	{
		if (y > x)
		{
			printf("You won't see me.");
		}
		else
		{
			int i=0;
			do
			{
				printf("%c\t", 65 + i);
				i++;
			} while (i<y);
			printf("1\t2\t3\n");
		}
	}


	return 0;
}