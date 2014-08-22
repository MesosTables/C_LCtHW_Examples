#include <stdio.h>
#include <ctype.h>
#include <string.h>

//declare a function that will determine if a character should be printed
int can_print (char ch);

//function that will print the letters of the string
void print_letters(char arg[], int n);

//function that takes in a number and array of strings
//passes the individual strings to have the letters printed individually
void print_arguments(int argc, char *argv[])
{
	int i = 0;
	int n = 0;
	for(i=1;i<argc;i++)
	{
		n = strlen(argv[i]);
		print_letters(argv[i], n);
	}
}

//prints the letters of the string individually
void print_letters (char arg[], int n)
{
	int i = 0;
	for (i=0; i < n; i++)
	{
		char ch = arg[i];
		if(can_print(ch))
		{
			printf("'%c' == %d ", ch, ch);
		}
	}
	printf("\n");
}

//returns true or false if the char is Letter OR is Blank
int can_print( char ch)
{
	return isalpha(ch) || isblank(ch);
}

//main function passes the in line arguments to the print_arguments function
int main (int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}