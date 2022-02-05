#include <stdio.h>
// This is example of function without argument and with return value.
int take_num()// Here we havent given any argument.
{
	int i;
	printf("Enter a number : ");
	scanf("%d", &i);
	return i;
}
int main()
{
	int a, b, c;
	c = take_num();
	printf("The entred number is %d\n" , c);

	return 0;
}

// TODO a program to show a function without argument and without return value.