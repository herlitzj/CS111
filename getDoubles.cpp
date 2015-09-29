#include <iostream>
using namespace std;
int main() {
	double a, b;
	cout << "enter double 1: ";
	cin >> a;
	cout << "enter double 2: ";
	cin >> b;

	if (a > b) {
		cout << "The first number is greater." << endl;
	} else if (b > a) {
		cout << "The second number is greater." << endl;
	} else {
		cout << "The numbers are equal." << endl;
	}	


	return 0;
}
