#include <stdio.h>

int main()
{
	int a, index = 0 ;

	printf("Enter a number: ");

	scanf("%d", &a);
	do
	{
		printf("%d\n", index);
		index = index + 1;
	} while (index < a);
	printf("\n");

	return 0;
}