#include <stdio.h>
#define LENGTH_OF_WEEK 7

int main ()
{
	int daysWeek [LENGTH_OF_WEEK] = {0,1,2,3,4,5,6};
	int offset = 3;
	char* dayName = NULL;
	
	int x;
	for (x=0; x<LENGTH_OF_WEEK ; x++)
	{
		printf("day is %d which is ", x);
		switch (daysWeek[x])
			{
				case 0:
				printf("Sunday\n");
				break;
				case 1:
				printf("Monday\n");
				break;
				case 2:
				printf("Tuesday\n");
				break;
				case 3:
				printf("Wednesday\n");
				break;
				case 4:
				printf("Thursday\n");
				break;
				case 5:
				printf("Friday\n");
				break;
				case 6:
				printf("Saturday\n");
				break;
			}
	}
	int i;
	for (i=0; i<LENGTH_OF_WEEK ; i++)
	{
		switch (daysWeek[(i + offset) % 7]) // adding in the offset
		// will offset which day we start on
		{
			case 0: dayName = "Sunday"; break;
			case 1: dayName = "Monday"; break;
			case 2: dayName = "Tuesday"; break;
			case 3: dayName = "Wednesday"; break;
			case 4: dayName = "Thursday"; break;
			case 5: dayName = "Friday"; break;
			case 6: dayName = "Saturday"; break;
		}
		printf ("Today is the greatest %s\n", dayName);
	}
	int y;
	for (y=0; y<LENGTH_OF_WEEK; y++)
		{
		printf("Checking something %d\n", daysWeek[y]);
		}
	return 0;
}