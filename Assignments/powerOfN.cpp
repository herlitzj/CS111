#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int number;
	int counter = 1;

	cout << "Please choose a positive integer less than 10. ";
	cin >> number;

	if(number < 0 || number > 9) {
		cout << "Number is invalid." << endl;
		return 1;
	} else {
		cout << "Exponential power " << number << " ^ " << number << endl;
	}

	for(int i = 1; i <= number; i++) {
		cout << number << " ^ " << i << " = " << pow(number, i) << endl;
	}

	cout << endl << "Multiples of " << number << " that are less than 100" << endl;
	
	for(int i = 1; i < 100; i++) {
		if(i % number == 0) {
			cout << i << " ";
			if(counter % number == 0) cout << endl;
			counter++;
		}
	}

	cout << endl;

	return 0;
}
