#include <stdio.h>

int main (int argc, const char* argv[])
{
	int i;
	for (i=0;i<argc;i++)
		printf("argv[%d]=%s\n", i , argv[i]);

// to run this program run the .exe along with words you want to pass
// into the program

return 0;
}