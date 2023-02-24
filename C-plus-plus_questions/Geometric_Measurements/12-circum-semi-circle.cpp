// finding the circumfrence of semi-circle
#include <iostream>

int main()
{
	const float PIE = 3.14;
	float R, D, result;
	int choice;

	std::cout << "Do you have the radius or diameter? \n";
	std::cout << "     1. radius                      \n";
	std::cout << "     2. diameter                    \n";
	std::cout << "choice: ";
	std::cin >> choice;

	switch (choice) {
		case 1:
			std::cout << "Enter the radius: ";
			std::cin >> R;
			result = (PIE * 2 * R) / 2;
			std::cout << "The circumfrence of the semi circle is: " << result;
			break;

		case 2:
			std::cout << "Enter the Diameter: ";
			std::cin >> D;
			result = (PIE * D) / 2;
			std::cout << "The circumfrence of the semi circle is: " << result;
			break;

		default:
			std::cout << "You have entered wrong choice!!!!";
	
	}
}
