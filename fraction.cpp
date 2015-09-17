#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	char dummychar;

	cout << "Enter the first fraction: ";
	cin >> a >> dummychar >> b;
	cout << "Enter the second fraction: ";
	cin >> c >> dummychar >> d;

	cout << "Sum: " << a*d + b*c << "/" << b * d << endl;


	return 0;
}
