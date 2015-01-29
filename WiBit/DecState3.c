#include <stdio.h>

// control structures part 3
// loops

int main ()
{

int x =0;
int y = 0;
int z = 0;

while (x<3)
{
	printf ("%d\n", x);
	x++;
}

do
{
	printf ("%d\n", y);
	y++;
} while (y !=3);

for ( z = 0; z <3; z++)
{
	printf ("%d\n", z);
}

return 0;
}