//finding the perimeter of a rectangle
#include<iostream>
int main(){
	int len, width, per;
	std::cout << "Enter the lenght and width of the rectangle: ";
	std::cin >> len >> width;

	per = 2 * (len + width);
	std::cout << "The perimeter of the rectangle is: " << per;

	return 0;
}
