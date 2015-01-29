#include <stdio.h>
#include <string.h>

int main ()
{
	char str [255];
	char str1 [255];
	char str2 [255];
	char name [255];
	char str3 [255];
	char str4 [255];
	char str5 [255];
	char str6 [255];
	
	printf("Type a word: "); gets(str);
	int len = strlen(str);
	printf("Your string is %d characters long\n", len);
	
	
	printf("type a word: "); gets(str1);
	strcpy(str2, str1);
	printf("Your string was copied as: %s\n", str2);
	
	printf("Type your first name: "); gets(name);
	strcat(name, " is your first name!");
	// this will add " is your first name!" to the initial string value
	puts(name);
	
	printf("str3: "); gets(str3);
	printf("str4: "); gets(str4);
	if (strcmp(str3, str4) ==0)
		printf("Strings match exactly");
	else if (strcmpi(str3, str4) ==0)
		printf("Strings match when ignoring case!");
	
	printf("str5: "); gets(str5);
	printf("str6: "); gets(str6);
	
	strlwr(str5);
	strupr (str6);
	puts (str5);
	puts (str6);
	
	return 0;
}