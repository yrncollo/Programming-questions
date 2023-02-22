#include <iostream>

using namespace std;

class Avarage
{
	public:
		static void calc(double a, double b, double c)
		{
			double av;
			av = (a + b + c) / 3;
			cout << "The avarage is: " << av;
		}

};

int main()
{
	double int1, int2, int3;
	cout << "Enter three integers to find the avarage: ";
	cin >> int1 >> int2 >> int3;

	Avarage::calc(int1, int2, int3);

}
