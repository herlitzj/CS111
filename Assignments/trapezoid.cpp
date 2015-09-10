#include <iostream>
using namespace std;

int main() {
	double h, b1, b2;

	cout << "To compute the area of a trapezoid" << endl << "I'll need the following info:" << endl;
	cout << "length of b1: ";
	cin >> b1;
	cout << "length of b2: ";
	cin >> b2;
	cout << "height: ";
	cin >> h;

	cout << "The area is " << 0.5 * h * (b1 + b2) << endl;

	return 0;

}
