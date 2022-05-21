#include<stdio.h>
int main()
{
	float lenght, width;
	printf("Enter the length of the rectangle: ");
	scanf("%f",&lenght);
	printf("Enter the width of the triangle: ");
	scanf("%f",&width);

	float answer;
	answer=lenght*width;
	printf("The erea of the rectangle is %.2f ",answer);
	return 0;
}

