#include <stdio.h>

int main()
{
	int a, b, c, i;
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", i);
		scanf("%d", &a);
		// This is the example of break statement.
		// if (a > 10)
		// {
		// 	break;
		// }

		// This is the example of continue statement.
		if (a > 10)
		{
			continue;
		}
		printf("Nabil Patel\n");
		printf("Nabil Patel\n");
	}
	printf("\n");

	return 0;
}