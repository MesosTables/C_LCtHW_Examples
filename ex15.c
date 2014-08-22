#include <stdio.h>

int main (int argc, char *argv[])
{
	int ages [] = {23, 42, 12, 89, 2};
	char *names[] = {"Carson", "Frank",
		"Mary", "John", "Lisa" };
		
	int count = sizeof(ages) / sizeof(int);
	int i = 0;
	
	//first way to use pointers using indexing
	for (i=0; i<count; i++)
	{
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}
	
	printf("-----\n");
	
	//setup the pointers to the start of the arrays
	int *cur_age = ages;
	//because an array of strings is two dimensional need char ** not char *
	char **cur_name = names;
	
	//second way to use pointers
	for(i=0; i<count; i++)
	{
		//the value of cur_name plus i
		printf("%s is %d years old.\n", *(cur_name+i), *(cur_age+i));
	}
	
	printf("-----\n");
	
	//3rd ways to display pointers are just arrays
	for(i = 0; i<count; i++)
	{
		printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
	}
	
	printf("-----\n");
	
	
	// fourth way with pointers in a stupid complex way
    for(cur_name = names, cur_age = ages;(cur_age - ages) < count;cur_name++, cur_age++)
    {
        printf("%s lived %d years so far.\n",
                *cur_name, *cur_age);
    }
	
	return 0;
}