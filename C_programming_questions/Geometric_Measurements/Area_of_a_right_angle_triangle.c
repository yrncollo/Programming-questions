#include<stdio.h>
int main()/*testing*/
{
	int base,hieght;
	float answer;
	printf("Enter the base of the triangle: ");
	scanf("%d",&base);
	printf("Enter the hieght of the triangle: ");
	scanf("%d",&hieght);

	answer=(0.5*base*hieght);
	printf("The area of the right angle triangle is %.2f ",answer);
	return 0;
}

