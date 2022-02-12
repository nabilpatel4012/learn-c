#include <stdio.h>
void printstar(int rows){
	for(int i = 0; i < rows; i++){
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void revPrintstar(int rows){
	for(int i = 0; i < rows; i++){
		for (int j = 0;j<=rows-i -1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main(){
int rows;
printf("Enter number of lines");
scanf("%d",&rows);
// printstar(rows);
revPrintstar(rows);
	return 0;
}