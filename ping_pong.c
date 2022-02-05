#include <stdio.h>

int main()
{
	int a;
	printf("Enter a number: \n");
	scanf("%d", &a);
	if (a % 5 == 0 && a % 7 == 0) {
		printf("Ping Pong");
	} else if (a % 5 == 0) {
		printf("Ping");
	} else if (a % 7 == 0) {
		printf("Pong");
	} else {
		printf("Enter another Number");
	}

	return 0;
}