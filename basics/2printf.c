#include <stdio.h>

int main()
{
	printf("Hello World\n");
	printf("Hello\nWorld!\n");
	printf("Hello\"World!\n");
	printf("Hello\tWorld!\n");
	printf("%d\n", 2748358);
	printf("My favourite number is: %d\n", 500);
	printf("My favourite %s is: %d\n", "number", 500);
	printf("My favourite %s is: %f\n", "number", 500.98794);//printing decimal using %f as the format specifier

	return 0;
}
