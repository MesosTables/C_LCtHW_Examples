#include <stdio.h>
#include <stdbool.h>

int main ()
{
	bool stayAlive = true;
	char* userPrompt = "Do you want to exit this program (Y/N)? ";
	char c;
	printf("%s", userPrompt);
	while(stayAlive)
	{
		c=getchar();
		if (c=='\n')
			continue;
		else if (c == 'y' || c=='Y')
			stayAlive = false;
		else
			printf("%s", userPrompt);
	}
	
	puts("\n\nHave a nice day");

return 0;
}