#include<stdio.h>
#include<math.h>
int main()
{
	float A, B, C; //A is hieght, B is base, C is hypotenuse
		       //
	char value;
	printf("Do you have the hieght?(Y/N) ");
	scanf("%c",&value);
	while (value){/*
		if (value == 'N' || value == 'n')
	{
		break;
	}
	else if (value == 'Y' || value == 'y')
	{
	printf("Enter the hieght of the triangle: ");
	scanf("%f",&A);
	}
	else {
		printf("Invalid value");
	}*/

	char value2;
	printf("Do you have the base?(Y/N) ");
	scanf("%c",&value2);
	if (value == 'N' || value == 'n')
	{
		break;
	}
	else if(value == 'Y' || value == 'y')
	{
	printf("Enter the base of the triangle: ");
	scanf("%f",&B);
	}
	else {
		printf("Invalid value");
	}

	char value3;
	printf("Do you have the hypotenuse of the triangle?(Y/N) ");
	scanf("%c",&value3);
	if (value == 'N' || value == 'n')
	{
		break;
	}
 	else if (value == 'Y' || value == 'y')
	{
	printf("Enter the hypotenuse of the triangle: ");
	scanf("%f",&C);
	}
	else {
		printf("Invalid value");
	}

	break;
	}
	float answer;
	if (A == '\0'){
		answer=sqrt((C*C)-(B*B));
		printf("The hieght of the triangle is %.2f",answer);
	}
	else if (B == '\0'){
		answer=sqrt((C*C)-(A*A));
		printf("The base of the triangle is %.2f",answer);
	}
	else {
		answer=sqrt((A*A)+(B*B));
		printf("The hypotenuse of the triangle is %.2f",answer);
	}
	return 0;
}
