#include <stdio.h>
/*
In this method we are first declaring the Function.
After that we are calling the function.
Then afterwards we are defining the function.
*/
int sum(int a, int b); // Function Declaration.
int main()
{
	int a, b, c;
	a = 9;
	b = 10;
	c = sum(a, b); // Function calling.
	printf("%d\n", c);
	return 0;
}
// Function Definition.
int sum(int a, int b) {
	return a + b;
}