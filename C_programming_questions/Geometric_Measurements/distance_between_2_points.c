#include<stdio.h>
#include<math.h>
int main()
{
	int X1,Y1,X2,Y2;
	float D; //distance
	printf("Enter the value of X1 ");
	scanf("%d",&X1);
	printf("Enter the value of Y1 ");
	scanf("%d",&Y1);
	printf("Enter the value of X2 ");
	scanf("%d",&X2);
	printf("Enter the value of Y2 ");
	scanf("%d",&Y2);
	
	D=sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1)));
	printf("The distance between the two points is %.2F",D);
	return 0;
}

