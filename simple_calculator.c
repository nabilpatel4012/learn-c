#include <stdio.h>
int main()
{
	int num1;
	int num2;
	int ans;
	char sign;
	printf("####################################################\n");
	printf("#                                                  #\n");
	printf("################  Simple Calculator  ###############\n");
	printf("#                                                  #\n");
	printf("####################################################\n");
	printf("Guide: Enter Numbers\n");
	printf(" \n");
	printf("Addition: 'a'\n");
	printf("Subtraction: 's'\n");
	printf("Multiplication: 'm'\n");
	printf("Division: 'd'\n");

	printf("Which operation you want to perform : \n");
	scanf("%s", &sign);

	printf("Enter First Number: ");
	scanf("%d", &num1);

	printf("Enter Second Number: \n");
	scanf("%d", &num2);

	printf("num1: %d \n ", num1);
	printf("num2: %d \n ", num2);
	printf("op: %c \n", sign);
	if (sign == 'a')
	{
		ans = num1 + num2;
		printf("Answer: %d \n", ans);
	} else if (sign == 's')
	{
		ans = num1 - num2;
		printf("Answer: %d\n", ans);
	} else if (sign == 'm')
	{
		ans = num1 * num2;
		printf("Answer: %d\n", ans);
	} else if (sign == 'd') {
		ans = num1 / num2;
		printf("Answer: %d\n", ans);
	}

	printf(" Done \n");

	return 0;
}