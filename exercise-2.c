/*
This Program Converts Units
Like:
KM to Miles
Inches to foot
CMs to Inches
Pounds to KGs
Inches to Meters
..etc.
*/
#include<stdio.h>
int main()
{	
	char input;
	float num;
	float ans;
	float kmsToMiles = 0.621371;
	float inchesToFoot = 0.0833333;
	float cmsToInches = 0.3937008;
	float poundsToKGs = 0.4535924;
	float inchesToMeters = 0.0254;

	while(1){
		printf("Enter the input character\n");
		printf("	1. KMs to Miles\n 	2. Inches to Foot\n 	3. CMs to Inches\n 	4. Pounds to KGs\n 	5. Inches to Meters\nQ. To Quit the program\n :");
		scanf("%c", &input);
		
		switch(input)
		{
			case 'q':
				printf("Quitting the program..\n");
				goto end;
				break;

			case '1':
				printf("Enter the Number you want to convert : \n");
				scanf("%f", &num);
				printf("The converted value of %.2f KMs in Miles is %.2f \n" ,num,ans);
				ans = num * kmsToMiles;
				printf("\n");
				break;

			case '2':
				printf("Enter the Number you want to convert : \n");
				scanf("%f", &num);
				ans = num * inchesToFoot;
				printf("The converted value of %.2f inches in foot is %.2f \n",num,ans);
				printf("\n");
				break;

			case '3':
				printf("Enter the Number you want to convert : \n");
				scanf("%f", &num);
				ans = num * cmsToInches;
				printf("The converted value of %.2f CMs in Inches is %.2f \n",num,ans);
				printf("\n");
				break;

			case '4':
				printf("Enter the Number you want to convert : \n");
				scanf("%f", &num);
				ans = num * poundsToKGs;
				printf("The converted value of %.2f Pounds in KGs is %.2f \n",num,ans);
				printf("\n");
				break;

			case '5':
				printf("Enter the Number you want to convert : \n");
				scanf("%f", &num);
				ans = num * inchesToMeters;
				printf("The converted value of %.2f inches in Meters is %.2f \n",num,ans);
				printf("\n");
				break;

			default:
				break;
		}

	}
	end:
	printf("Done!\n");
	return 0;
}