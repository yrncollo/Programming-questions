#include <iostream>

int main()
{
	const float PIE = 3.14;
	int R, D, choice;
	float result;

	std::cout << "Do you have radius or diameter? \n";
	std::cout << " \t 1) radius";
	std::cout << " \t 2) diameter \n";
	std::cout << "Choice: ";
	std::cin >> choice;

	switch (choice) {
		case 1:
			std::cout << "Enter the radius: ";
			std::cin >> R;
			result = PIE * R * R;
			std::cout << "The area of the circle is: " << result;
			break;

		case 2:
			std::cout << "Enter the Diameter: ";
			std::cin >> D;
			R = D / 2;
			result = PIE * R * R;
			std::cout << "The area of the circle is: " << result;
			break;

		default:
			std::cout << "Enter the correct choice";
	}

	return 0;
}
