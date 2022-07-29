#include <stdio.h>
#include <stdlib.h>

int main()
{
	//make sure to create a variable where the input of the user would be stored in before scanning for using input
	int age;
	double gpa;
	char grade;
	char name[20];

	printf("Enter your age: \n"); // prompt the user what to do before asking for an input from the user

	scanf("%d", &age); // using to get input ---- allow the user to input something into the program. in this case ampisign & is a pointer

	printf("You are %d age old\n", age); // printing whata we have collected from the user

	printf("\tPlease enter your gpa: ");

	scanf("%lf", &gpa);
	printf("Your gpa is: %f\n", gpa);

	printf("Please enter your grade: ");

	scanf(" %c", &grade);
	printf("Your grade is: %c", grade);


	printf("Please enter your name: ");

	scanf(" %s", name);
	printf("Your Name is: %s\n", name);

	//INTRODUCING THE fgets() which has capability to take in string after space unlike scanf
	//Capable of storing multiple words
	//I could'nt use the fgets together with scanf but when i tried it seperately i got a success

	//printf("Please enter your name: ");

	//fgets(name, 20, stdin); //Tell fgets the maximum character it can accepts e.g 20 stdin --- stands for standard input-- telling fget were we want to get the input from
	//printf("Your Name is: %s", name);

	return 0;
}
