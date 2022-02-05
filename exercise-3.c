#include <stdio.h>
// Recursive Approach
int fib_recursive(int n){
	if (n==1 || n==2)
	{
		return n - 1;
	}
	else
	{
		return fib_recursive(n-1) + fib_recursive(n-2);
	}
}
// Iterative Approach
int fib_iterative(int n){
	int a = 0;// First number is zero thats why we have initialized it with 0
	int b = 1;// Second number is one ..............
	for (int i = 0; i < n-1; ++i)
	{
		b = a + b;// Here the Value of b is updated
		a = b - a;// We want the older value of b so as for the working of logic
	}
	return a;
}
int main()
{	
	int num;
	printf("Enter the index to get Fibonacci Series\n");
	scanf("%d", &num);
	printf("The value of Fibonacci number at position number %d using iterative approach is %d \n",num,fib_iterative(num));
	printf("The value of Fibonacci number at position number %d using recursive approach is %d \n",num,fib_recursive(num));
	return 0;
}