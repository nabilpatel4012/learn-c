#include <stdio.h>
int main()
{
	int a = 75;
	printf("The value of a is %d\n", a);
	int* ptra = &a;
	// The line below prints the address of 'a'
	// printf("The value of a is %x\n", ptra);

	//This line prints the address of pointer which points to a that is the address of 'ptra'
	printf("The address of pointer to a is %p\n", &ptra);

	//The Line prints actual value of a with the help of pointer of a.
	printf("The value of a is %d\n", *ptra);
	printf("The value of a is %d\n", a);
	return 0;
}
