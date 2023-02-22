#include <iostream>

using namespace std;

class Area{
	public:
		int length, breath;

		Area(int length, int breath)
		{
			this->length = length;
			this->breath = breath;
		}
		int returnArea()
		{
			return length * breath;
		}


};

int main()
{
	Area a(4,5);
	cout << a.returnArea();

	return 0;
}
