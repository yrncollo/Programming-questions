#include <iostream>
#include <stdexcept>

using namespace std;

class triangle
{
	public:
		int hyp;
		int base;
		int hight;

		double area(int base, int hight)
		{
			return 0.5 * base * hight;
		}

		int perim(int base, int hight, int hyp)
		{
			return base + hight + hyp;
		}
};

int main(){
	double area;
	int per;
	triangle tri;
	tri.base = 3;
	tri.hight = 4;
	tri.hyp = 5;


	area = tri.area(tri.base, tri.hight);
	per = tri.perim(tri.base, tri.hight , tri.hyp);
	
	cout << "the area is: " << area << " and the perimeter is: " << per;

	return 0;
}

	
