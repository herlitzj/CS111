#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int base, exponent;
	
	cout << "Enter a number n that is less than 10 . ";
	cin >> base;
	exponent = base;	

	for(int i = 0; i < exponent; i++) {
		cout << base << " ^ " << pow(exponent,i) << " = " << base = base * exponent;
	}

	cout << base << endl;



	return 0;
}
