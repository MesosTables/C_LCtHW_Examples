#include <stdio.h>
#include <windows.h>

int main()
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
// pass the color to the variable consoleHandle	

	int i;
	for (i = 1; i <= 15; i++)
	{
		SetConsoleTextAttribute(consoleHandle, i); 
// this sets the color of the console to whatever the "i" variable is
		printf("This is color [%d]\n", i);
	}
	

	SetConsoleTextAttribute(consoleHandle, 7);

return 0;
}