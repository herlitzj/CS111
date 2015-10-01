#include <iostream>
using namespace std;

int triangle(int seedNumber) {

	if(seedNumber % 10 == seedNumber) {
		cout << seedNumber << endl;
		return 0;
	} else {
		cout << seedNumber << endl;
		triangle(seedNumber / 10);
	}

}


int square(int seedNumber) {
	for(int i = 1; i <= seedNumber; i++) {
		for(int j = 1; j <= seedNumber; j++) {
			if(j % 2 == 0) {
				cout << "B";
			} else {
				cout << "A";
			}
		}

		cout << endl;
	} 

}


int main() {
	int squareInput, triangleInput;

	cout << "Please enter a positive integer. ";
	cin >> squareInput;

	if(squareInput < 0) {
		cout << "Number is invalid." << endl;
		return 0;
	} else {
		square(squareInput);
	}

	cout << "Please enter an integer greater than 1000. ";
	cin >> triangleInput;

	if(triangleInput < 1000) {
		cout << "Number is invalid. " << endl;
		return 0;
	} else {
		triangle(triangleInput);
	}

	return 0;
}
