#include<stdio.h>
int main()
{
	float r;
        float answer;
	printf("Enter the radius of the circle: ");
	scanf("%f",&r);

	answer=(3.14*r*2);
	printf("The circumference of the circle is %.2f",answer);
	return 0;
}
