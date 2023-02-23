#include <iostream>

int main()
{
	int a = 2;
	int b = 3;
	int temp;

	std::cout << a << b << "\n \n";

	temp = a;
	a = b;
	b = temp;

	std::cout << a << b << "\n \n";
}
