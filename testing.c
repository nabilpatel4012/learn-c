#include <stdio.h>

void PRINT(int i, int limit){
	do{ 
	if (i++ < limit) 
{ 
printf("GeeksQuizn\n"); 
continue; 
} 
	}while(0);
	
}

int main()
{
	int i = 0;
	PRINT(i, 3);
	return 0;
}