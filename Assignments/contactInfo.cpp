#include <iostream>
using namespace std;

int main() {

	string firstName, lastName, number, email, married;
	char numberType;
	int age;
	double taxRate;

	cout << "First Name? ";
	cin >> firstName;
	cout << "Last Name? ";
	cin >> lastName;
	cout << "Phone Number? ";
	cin >> number;
	cout  << "Is it (M)obile, (W)ork, or (H)ome? ";
	cin >> numberType;
	cout << "Email address? ";
	cin >> email;
	cout << "Married? ";
	cin >> married;
	cout << "Age? ";
	cin >> age;
	cout << "Tax rate in decimal? ";
	cin >> taxRate;
	cout << endl;	


	
	cout << lastName << ", " << firstName << endl;
	cout << numberType << ": " << number << endl;
	cout << "email: " << email << endl;
	cout << "married: " << married << endl;
	cout << "age: " << age << endl;
	cout << "tax rate: " << taxRate * 100 << "%" << endl;

	return 0;
}
