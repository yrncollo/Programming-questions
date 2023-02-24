#include <iostream>

int main()
{
	const float pie = 3.14;
	int radius; 
	int diameter; 
	int choice;
	float result;

	std::cout << "Do you have the radius or diameter? \n";
	std::cout << "     1. radius                      \n";
	std::cout << "     2. diameter                    \n";
	std::cin >> choice;

	switch (choice) {
		case 1:
			std::cout << "Enter the radius: ";
			std::cin >> radius;
			result = pie * 2 * radius;
			std::cout << "The circumfrence of the circle is: " << result; 
			break;
		case 2:
			std::cout << "Enter the Diameter: ";
			std::cin >> diameter;
			result = pie * diameter;
			std::cout << "The circumfrence of the circle is: " << result; 
			break;
		default:
			std::cout << "Choose the correct choice!!!";
	
	}

}
