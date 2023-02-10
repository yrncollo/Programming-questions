//This is a program to find the perimeter of a square
#include<iostream>
int main(void){
	int a, perimeter;
	std::cout << "Enter one side of the square: ";
	std::cin >> a;
	perimeter = a * 4;
	std::cout << "The perimeter of the square is: " << perimeter;

	return 0;
}

