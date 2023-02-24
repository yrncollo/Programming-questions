// C = pie(a+b)(3 * ((a - b)* (a-b) / ((a - b)* (a-b)) * (sqrt -3 * (((a - b)* (a-b)) / ((a - b)* (a-b)) + 4 + 10 ))) + 1)
// pie (a+b)(3((a-b) * (a-b)) / ((a + b) * (a + b)) * sqrt( -3 ((a -b) * (a -b)) / ((a+b) * (a +b)) + 4 + 10) +1)

#include <iostream>
#include <cmath>

int main()
{
	int a, b;
	float result;
	const float PIE = 3.14159265358979323846;
	std::cout << "Enter a and b values: ";
	std::cin >> a >> b;

	result = PIE * (a+b) *(3* ((a-b) * (a-b)) / ((a + b) * (a + b)) * sqrt( -3 * ((a -b) * (a -b)) / ((a+b) * (a +b)) + 4 + 10) +1);

	std::cout << result;


}
