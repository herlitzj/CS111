#include <iostream>
using namespace std;

int main() {
	int q, d, n, p;
	
	cout << "How many quarters do you have? ";
	cin >> q;
	cout << "How many dimes do you have? ";
	cin >> d;
	cout << "How many nickles do you have? ";
	cin >> n;
	cout << "How many pennies do you have? ";
	cin >> p;

	cout << "That makes " << q*25 + d*10 + n*5 + p << " in change." << endl;

	return 0;
}
