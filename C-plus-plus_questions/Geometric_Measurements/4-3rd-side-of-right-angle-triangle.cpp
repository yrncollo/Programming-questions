#include<iostream>
#include<cmath>
int main(){
	int a, b, c;
	std::cout << "Enter two sides of a triangle: ";
	std::cin >> a >> b;
	c = sqrt((a*a) + (b*b));
	std::cout << "The other side is: " << c;
	
	return 0;
}
