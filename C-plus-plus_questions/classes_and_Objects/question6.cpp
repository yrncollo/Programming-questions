#include <iostream>

using namespace std;

class Area{
	public:
		int length, breath;

		void setDim(int a, int b){
			length = a;
			breath = b;
		}

		int getArea(){
			return length * breath ;
		}

};

int main ()
{
	Area a;
	a.setDim(4, 5);
	cout << a.getArea();

	return 0;
}
