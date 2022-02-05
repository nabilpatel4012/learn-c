#include <stdio.h>
// This is the example of function with argument but without return value.
void printstar(int n) // Void does not return any value.
{
	for (int i = 0; i < n ; i++) {
		printf("%c\n", '*');
	}
}
int main()
{
	int a, b, c;
	printstar(7);
	printf(" The star pattern\n");

	return 0;
}