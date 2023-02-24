// area of a ring
#include <iostream>

int main()
{
	const float PIE = 3.14;
	float R, D, r, d;
	float Area, area, result;
	int choice;

	std::cout << "Do you have the radius or diameter? \n";
	std::cout << "     1. radius                      \n";
	std::cout << "     2. diameter                    \n";
	std::cout << "choice: ";
	std::cin >> choice;

	switch (choice) {
		case 1:
			std::cout << "Enter the radius of the outer circle: ";
			std::cin >> R;
			std::cout << "Enter the radius of the inner circle: ";
			std::cin >> r;
			Area = (PIE * R * R);
			area = (PIE * r * r);
			result = Area - area;
			std::cout << "The area of the ring is: " << result;
			break;

		case 2:
			std::cout << "Enter the diameter of the outer circle: ";
			std::cin >> D;
			std::cout << "Enter the diameter of the inner circle: ";
			std::cin >> d;
			R = D / 2;
			r = d / 2;
			Area = (PIE * R * R);
			area = (PIE * r * r);
			result = Area - area;
			std::cout << "The area of the ring is: " << result;
			break;

		default:
			std::cout << "You have entered wrong choice!!!!";
	
	}



	return 0;
}

