#include <stdio.h>
/*
In this method we are declaring and defining at the same time.
After that we are calling that fuction in main function.
*/
int sum(int a, int b) // Function Declaration
{
	//Function definition here
	return a + b; // Return Value
}
int main()
{
	int a, b, c;
	a = 9;
	b = 11;
	c = sum (a , b); // Calling the function.
	printf("%d\n", c);

	return 0;
}