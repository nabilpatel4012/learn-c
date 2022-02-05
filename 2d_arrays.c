#include <stdio.h>
int main()
{
	int matrix[2][4] = {{2,3,4,5}, {5,4,3,2}};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("The value of %d, %d element of the array is %d\n", i,j,matrix[i][j] );
		}
	}
	return 0;
}