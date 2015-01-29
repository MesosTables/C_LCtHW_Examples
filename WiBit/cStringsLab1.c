#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, const char* argv[])
// argc is the count of the number of arguments passed in
// const char* argv[] is the argument passed in
{
// caeser shift program
	int shift = atoi(argv[1]);
// atoi ASCII to integer. first argument converted to integer
	char message[256];
	strcpy(message, argv[2]);
//second argument passed to string "message"
	
	int i;
	for(i=0; i<strlen(message); i++)
	{
		printf("%c", message[i] + shift);
	}
	
	putchar('\n');

// run this .exe like this "example.exe # [message]" the # 
	
	return 0;
}