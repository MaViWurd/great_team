#include <stdio.h>

int main()
{
	printf("%f\n", 8.9); //Printing a decimal
	printf("%f\n", 5.0 + 4.5);
	printf("%f\n", 5.0 - 4.5);
	printf("%f\n", 5.0 / 4.5);
	printf("%f\n", 5.0 * 4.5);

	// Using floating point numbers along side interger:w
	//
	
	printf("%f\n", 5.0 * 4.5);
//	printf("%f\n", 5 * 4); //not going to work cause %f is a floating number and we're giving it a int

	printf("%d\n", 5 / 4); // here we have an output as one not 1.25000 that is cause we specified %d for int so it return an int as the answer and that is wrong
	
	printf("%f\n", 5 / 4.0);

//	printf("%f\n", 5 / 4); // compiler error cause 5 and 4 as the data is an int and format specifier says float i.e a decimal

	printf("%f\n", (double) 5 / 4);

	return 0;
}
