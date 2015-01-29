#include <stdio.h>
#include <string.h>

int main ()
{
	char* str = "string";
	char sentence [20];
	strcpy (sentence, "Hey, Buddy!");
// this requires <string.h>
	
	printf("%s\n", str);
	printf("%s\n", sentence);


return 0;
}