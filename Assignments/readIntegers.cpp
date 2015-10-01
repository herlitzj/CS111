#include <iostream>
using namespace std;
int main() {
	int num = 1;
	int positiveNumbers = 0, negativeNumbers = 0;
	double counter = -1.0, total = 0;
	cout << "Enter an integer and press return, the input will end if you enter 0. " << endl;
	while(num != 0) {
		cin >> num;
		if(num > 0) {
			positiveNumbers++;
		} else if(num < 0) {
			negativeNumbers++;
		}

		total = total + num;
		counter++;
		
	}

	cout << "The number of positives is " << positiveNumbers << endl;
	cout << "The number of negatives is " << negativeNumbers << endl;
	cout << "The total is " << total << endl;
	cout << "The average is " << total/counter << endl;

	return 0;
}


