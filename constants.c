#include <stdio.h>
#define PI 3.14 // here we have defined a constant as a preprosessor.(Preprosessor doesn't require ';')

int main()
{
	int a, b, c;
	//PI = 7.14; Here we can't change the Value of PI as it was defined as preprosessor and it is contant throughout the Code.
	printf("%f\n", PI);

	return 0;
}