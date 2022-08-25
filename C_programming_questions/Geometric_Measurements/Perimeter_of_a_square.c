#include<stdio.h>
int main()
{
	float square;
	float perimeter;
	printf("Enter one side of the square: ");
	scanf("%f", &square);
	
	perimeter=(square*4);
	printf("The perimeter of the square is %.2f",perimeter);
	
	return 0;
}
