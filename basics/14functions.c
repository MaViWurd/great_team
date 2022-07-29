//Functions: Collection of code that perfors a specific task
//
//NB: While iwas using the terminal I was having error because i declared my main function before the sayHi function
//But if using an IDE like code::block, it will helo you correct such error

#include <stdio.h>
#include <stdlib.h>

//TODO----> Learn Return type of function
//check return type in tutor current directory

void sayHi(char name[], int array) //parameter: this are values that we give to a function
{
//	array = 19;  //This will work if not properly if you declared int array as a parameter in the function

	printf("Hello Marvel\n%s", name);

	printf("You are %d year old\n", array);
}

int main(void)
{
	printf("Top\n");
	sayHi("Marvel", 19); //inorder to use a code inside of a function we have to call the funtion - Functioncall
	printf("Bottom\n");
	return 0;
}
