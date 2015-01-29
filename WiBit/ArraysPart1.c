#include <stdio.h>

int main ()
{

char webSiteName [5]; // declare a 5 element 1 dimenstional array

webSiteName [0] = 'W';
webSiteName [1] = 'i';
webSiteName [2] = 'B';
webSiteName [3] = 'i';
webSiteName [4] = 't';

const int row = 5;
 
//for loop to print above array
for (int x = 0; x<row; x++)
	{
	printf("%c", webSiteName[x]);
	}
putchar('\n');

return 0;
}