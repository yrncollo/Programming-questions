#include <iostream>

int main()
{
	int a,b,quotient, remainder;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	quotient = a/b;
	remainder = a%b;

	std::cout << "The quotient is: " << quotient << "\n";
	std::cout << "The remainder is: " << remainder;

	return 0;
}
