#include <stdio.h>

int main ()
{

int additionTable [2][5]; // declare a two dimensional array with
// 2 rows and 5 columns that looks like this
//  [x] [x] [x] [x] [x]
//  [x] [x] [x] [x] [x]

additionTable [0][0]=0;
additionTable [0][1]=1;
additionTable [0][2]=2;
additionTable [0][3]=3;
additionTable [0][4]=4;
additionTable [1][0]=1;
additionTable [1][1]=2;
additionTable [1][2]=3;
additionTable [1][3]=4;
additionTable [1][4]=5;
const int rows1 = 2, cols1 =5;

for (int i =0; i<rows1 ; i++)
{
	for (int j = 0; j<cols1; j++)
	{
		printf("%d\t", additionTable[i][j]);
	}
	putchar('\n');
}

// make Array programatically

const int rows = 2, cols =5;

int additionTable1[rows][cols];

// LoadArray
for (int i =0; i<rows ; i++)
{
	for (int j = 0; j<cols; j++)
	{
		additionTable1[i][j] = i + j;
	}
}

//PrintArray
for (int i =0; i<rows ; i++)
{
	for (int j = 0; j<cols; j++)
	{
		printf("%d\t", additionTable1[i][j]);
	}
	putchar('\n');
}



return 0;
}