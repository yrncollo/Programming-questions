#include <iostream>
using namespace std;

class Rectangle{
	public:
		double l,w;
		Rectangle(double length, double width)
		{
			l = length;
			w = width;
		}
		double area()
		{
			return l * w;
		}
};
		
int main(){
	Rectangle rect1(4,5);
	Rectangle rect2(8,5);
	cout << "rectangle 1: " << rect1.area() << "\n";
	cout << "rectangle 2: " << rect2.area() << "\n";

	return 0;
}
