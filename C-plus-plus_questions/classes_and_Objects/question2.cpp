#include <iostream>
#include <string>
using namespace std;

class Student
{
	public:
		std::string name;
		int roll_no;
		int phone;
		std::string address;
};

int main(){
	// sam details
	Student sam;
	sam.address = "ad124554";
	sam.name = "Sam";
	sam.phone = 0711111111;
	sam.roll_no = 2;

	cout << "Address: " << sam.address << "\n";
	cout << "phone: " << sam.phone << "\n";
	cout << "Name: " << sam.name << "\n";
	cout << "roll_no: " << sam.roll_no << "\n";

	//John details
	Student John;
	John.address = "ad174hfas";
	John.name = "John";
	John.phone = 072222222;
	John.roll_no = 3;

	cout << "\nAddress: " << John.address << "\n";
	cout << "phone: " << John.phone << "\n";
	cout << "Name: " << John.name << "\n";
	cout << "roll_no: " << John.roll_no << "\n";
	
}
