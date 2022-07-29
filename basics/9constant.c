#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Constant is a special type of variable in C which cant be modified
	//Its better to use a cap log for the variable name like NUM instead of num
	//A constant can also refer to any number or any text that we're using in our program e.g printf("Hello");  hello here is a constant, cause it can't be modified or changed. other e.g printf("%d", 70);
	
	const int NUM = 5;

	printf("%d\n", num);
//basically you can modified the data in num
//But Note that if the variable num is a constant it cannot be modified
//	num =8;

	printf("%d\n\t",num);
	

	return 0;
}
