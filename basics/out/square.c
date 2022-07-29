//gcc square.c -o square -lm
//this program must be linked to th maths lib^

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[])
{
	double result;
	double num;
	char Firstname[20];
	char Surname[20];
	char Lastname[20];


	printf("Hi\nPlease enter your First Name: ");
	scanf("%s", Firstname);

	printf("\tPlease enter your SurName: ");
	scanf("%s", Surname);

	printf("\t\tPlease enter your LastName: ");
	scanf("%s", Lastname);

	printf("\n\n Hi, Welcome %s %s %s,\n\n", Surname, Firstname, Lastname);
	

	printf("Please input a whole number you'd want to sqaure: ");
	scanf("%lf", &num);

//	num = (double)num;
	result = sqrt(num);

	printf("\nThe square root of %0.1f, is: %0.1lf\n\n", num, result);

	printf("\tThank you for using this Program\nMade with Love by E.Marvel\n\t");
}
