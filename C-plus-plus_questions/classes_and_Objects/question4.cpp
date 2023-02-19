#include <iostream>
using namespace std;

class Triangle
{
	public:
		double a, b, c;

		Triangle(double side1, double side2, double side3){
			a = side1;
			b = side2;
			c = side3;
		}
		double perimeter(){
			return a + b + c;
		}

		
		double area()
		{
			return 0.5 * b * a;
		}
};

int main()
{
	Triangle tri(3,4,5);
	cout << tri.perimeter() << "\n";
	cout << tri.area() ;

	return 0;
}
