#include <iostream>

using namespace std;

class Complex
{
	public:
		double a, b;

		Complex(double a, double b)
		{
			this->a = a;
			this->b = b;
		}

		double add()
		{
			return a + b;
		}
		double subtract()
		{
			return a - b;
		}
};

int main()
{
	long double int1, int2;
	cout << "Enter two numbers: ";
	cin >> int1 >> int2;

	Complex com(int1, int2);

	cout << com.add() << "\n" << com.subtract();
}
