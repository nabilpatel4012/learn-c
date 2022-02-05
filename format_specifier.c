#include <stdio.h>

int main()
{
	int a = 5;
	float b = 7.3330;
	printf("%8.4f \n", b);

	// Lets see Constants in C
	int c = 10;
	c = 11; // Here we can change the value of c because it is a variable.

	const int d = 11;
	// d = 10;  Here we cant change the value of as it is defined as a constant.

	return 0;
}