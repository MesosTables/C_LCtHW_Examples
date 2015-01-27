#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

// creating a Person structure with four elements
struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create( char *name, int age, int height, int weight)
{
	//checking to make sure memory allocated for creation of the person structure
	struct Person *who = malloc(sizeof(struct Person));
	//checking that memory allocated is valid
	assert (who!= NULL);
	
	//setting the four elements of the structure
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	
	return who;
}

//removing created structures to prevent memory leak
void Person_destroy(struct Person *who)
{
	assert(who != NULL);
	
	free(who->name);
	free(who);
}

//printing the created Person struct to console
void Person_print (struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tWeight: %d\n", who->height);
	printf("\tHeight: %d\n", who->weight);
}

int main (int argc, char*argv[])
{
	//make two people
	struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
	struct Person *frank = Person_create("Frank Blank", 20, 72, 180);
	
	//print them and where they are in memory
	printf("Joe is at memory location %p\n", joe);
	Person_print(joe);
	
	printf("Frank is at memory location %p\n", frank);
	Person_print(frank);
	
	//make everyone gain weight and age 20 years
	joe->age += 20;
	joe->weight +=22;
	joe->height +=5;
	Person_print(joe);
	
	frank->age += 20;
	frank->weight += 9;
	Person_print(frank);
	
	//destroy both structures to clean up memory
	Person_destroy(joe);
	Person_destroy(frank);
	
	return 0;
}