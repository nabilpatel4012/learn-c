#include<stdio.h>

int main()
{
	int marks [4];
	// First Method.
	// marks [0] = 20;
	// printf("marks of student 1 is %d\n", marks[0] );
	// marks[0] = 30;
	// marks[1] = 35;
	// marks[2] = 40;
	// marks[3] = 45;

	for (int i = 0; i < 5; i++)
	{
		printf("Enter the value of %d element of the array\n", i);
		scanf("%d", &marks[i]);

	}
		for (int i = 0; i < 5; i++)
	{
		printf("The value of %d element of the array is %d\n", i, marks[i]);

	}


	return 0;
}