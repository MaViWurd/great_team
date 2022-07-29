#include <stdio.h>

int main()
{
	float num1 = 8.9;
	float num2 = 5.0;
	float num3 = 4.5;
	int num4 = 5;
	int num5 = 6;

	printf("%f\n", num1); //Printing a decimal
	printf("%f\n", num2 + num3);
	printf("%f\n", num2 - num3);
	printf("%f\n", num2 / num3);
	printf("%f\n", num2 * num3);

	// Using floating point numbers along side interger:w
	//
	
	printf("%f\n", num2 * num3);
//	printf("%f\n", 5 * 4); //not going to work cause %f is a floating number and we're giving it a int

	printf("%d\n", (int)(num2 / num3)); // here we have an output as one not 1.25000 that is cause we specified %d for int so it return an int as the answer and that is wrong
	
	printf("%f\n", num4 / num3);

//	printf("%f\n", 5 / 4); // compiler error cause 5 and 4 as the data is an int and format specifier says float i.e a decimal

	printf("%f\n", (double) num4 / num5);

	return 0;
}
