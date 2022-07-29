#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int num = 6;
	//using more complex mathematical function made available defaultly by c
	//functions are blocks of code that we can call and when we call be they can do certain things for us
	
	printf("%f\n", pow(2, 3) ); //take 2^3   // please note that we have to print this as a decimal number %f
//And lastly note that math.h must be included in the header section


	printf("%f\n", sqrt(36) ); //allow you to take numbers square i.e sqaure root
	printf("%f\n", ceil(36.356) ); //rounds number up to the highest number

	printf("%f\n", floor(36.356) ); //does the opposite of ceil, rounds the number down no matter what

//TODO ---------> GOOGLE SEARCH FOR C-MATHS FUNCTIONS -----THERE'S ALOT TO USE

	return 0;
}
