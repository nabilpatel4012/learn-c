/*
################# Rule of Switch Case #################
1. Switch expression must be an int or char
2. Case value must be and integer or char.
3. Case must come inside switch.
4. 'break;' is not must.

NOTE: If we dont use break, the case checking will go on continuosly and it also prints the default value as well.
*/
//TODO: We can use switch inside switch (Nested Switch).
#include <stdio.h>

int main()
{
	int a;

	printf("Enter number between 1 to 5:\n");
	scanf("%d", &a);
	switch (a) {
	case 3:
		printf("Number is 3 \n");
		break;

	case 4:
		printf("Number is 4 \n");
		break;

	case 5:
		printf("Number is 5\n");
		break;
	default:
		printf("Number is not 3, 4, or 5 \n");
	}



	return 0;
}