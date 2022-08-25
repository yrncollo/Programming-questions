#include<stdio.h> /*this si this is an new*/
int main()
{
	float r;
	float answer;	
	printf("Enter the radius of the circle: ");
	scanf("%f",&r);

	answer=(3.14*r*r);
	printf("The area of the circle is %.2f", answer);
	return 0;
}

