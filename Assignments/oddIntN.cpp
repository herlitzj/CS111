#include <iostream>
using namespace std;

void diagramOne(int inputNumber) {
	cout << "Diagram 1:" << endl;

	for(int i = 1; i <= inputNumber; i++) {
		for(int j = 1; j <= inputNumber; j++) {
			if(i == j || i + j == inputNumber + 1 || j == inputNumber / 2 + 1 || i == inputNumber / 2 +1) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;

	}

}


void diagramTwo(int inputNumber) {
	cout << "Diagram 2:" << endl;

	for(int i = 1; i <= inputNumber; i++) {
		for(int j = 1; j <= inputNumber; j++) {
			if(((j == inputNumber / 2 || j == inputNumber / 2 + 2) && i != inputNumber / 2 + 1) || ((i == inputNumber / 2 || i == inputNumber / 2 + 2) && j != inputNumber / 2 + 1) || (i == inputNumber / 2 +1 && (j == inputNumber || j == 1)) || (j == inputNumber / 2 + 1 && (i == inputNumber || i == 1)) ) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		
		cout << endl;

	}

}




int main() {
	int number;

	cout << "Choose a positive odd integer less than 30. ";
	cin >> number;

	while(number > 30 || number < 0 || number % 2 == 0) {
		cout << "That number is invalid, please choose another. ";
		cin >> number;
	}

	diagramOne(number);
	
	cout << endl << endl;

	diagramTwo(number);


	return 0;
}
