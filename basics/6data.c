#include <stdio.h>

int main()
{
	int age = 67;
	char name[] = "Tom";

	//A variable is basically jjust like a container were we can store some bunch of data
	printf("There once was a man named %s\n", name);  // A string is a collection or sequence of characters, %s is a place holder
	printf("He was %i years old.\n", age);

//	char name[] = "John";
	age = 30;
	printf("He really liked the name %s.\n", name);
	printf("But did not like being %i.\n", age);
	printf("\n");

	return 0;
}
