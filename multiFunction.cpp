#include <iostream>
using namespace std;

void multiPrint(int n, char c) {
	for(int i = 0; i <= n; i++) cout << c;
}

bool isPrime(int n) {
	bool prime = true;
	for (int i = 1; i < n/2; i++) {
		if (n % i == 0) prime = false;
	}
	return prime;
}

int max3(int one, int two, int three) {
	int returnValue = one;
	if(two > one && two > three) returnValue = two;
	if(three > one && three > two) returnValue = three;
	return returnValue;
}


int main() {
	int funcChoice;


	cout << "Which function would you like to use?" << endl;
	cout << "1. Multi Print" << endl;
	cout << "2. Is Prime" << endl;
	cout << "3. Max 3" << endl;
	cout << "4. Quadratic" << endl;
	cout << "5. Fibonacci" << endl;
	cin >> funcChoice;


	if (funcChoice < 0 || funcChoice > 5) {
		cout << "That is not a valid choice. Please choose again.";
		cin >> funcChoice;
	} else {
		if (funcChoice == 1) {
			int inputLines;
			char inputChar;
			cout << "Please choose a number of lines and a character to print.";
			cin >> inputLines >> inputChar;
			multiPrint(inputLines, inputChar);
		} else if (funcChoice == 2) {
			int primeTest;
			cout << "Please enter a number to test if it is prime.";
			cin >> primeTest;
			if (isPrime(primeTest) == true) cout << "The number is prime." << endl;
			else cout << "The number is not prime." << endl;
		} else if (funcChoice == 3) {
			int one, two, three;
			cout << "Please input three test scores.";
			cin >> one >> two >> three;
			cout << "The highest test score is: " << max3(one, two, three) << endl;
		}
	}

	return 0;
}
