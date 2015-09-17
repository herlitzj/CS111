#include <iostream>
using namespace std;

int main() {
	int number;

	cout << "Please input a 3-digit integer. ";
	cin >> number;

	if (number < 100 || number > 999) {
		cout << "Please enter a valid 3-digit number." << endl;
		return 0;
	} else {
		cout << "The sum of all digits in " << number << " is " 
		<<  number % 10 + number / 10 % 10 + number / 100 << endl;
	}



	return 0;
}
