#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double radius;
	cout << "What is the radius of the circle? ";
	cin >> radius;
	cout << "The circumference is " << 2 * M_PI * radius << endl;
	cout << "The area is " << M_PI * pow(radius, 2)  << endl;


	return 0;
}
