#include <stdio.h>

int main()
{
	int a, i, ans;
	scanf("%d" , &a);
	for (i = 1 ; i < 11 ; i++) {
		ans = a * i;

		printf("%d x %d = %d\n", a, i, ans);
	}

	return 0;
}