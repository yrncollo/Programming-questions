#include <iostream>
#include <string>
using namespace std;

class Student
{
	public:
		std::string name;
		int roll_no;

	void result()
	{
		cout << "The student name is " << name << " and roll_no is: " << roll_no;
	}
};

int main()
{
	Student obj;
	obj.name = "John";
	obj.roll_no = 2;
	obj.result();

	return 0;
}
