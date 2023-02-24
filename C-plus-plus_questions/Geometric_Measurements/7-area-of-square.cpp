#include <iostream>

int main()
{
	int result, side;
	std::cout << "Enter one side of the square: ";
	std::cin >> side;
	result = side * side;
	std::cout << "The area of the square is: " << result;
}
