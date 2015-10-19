#include <iostream>
using namespace std;

bool isPrime(int x) {
	int divider = x/2;
	bool isPrime = true;
	for(int i = 2; i <= divider; i++) {
		if(x%i == 0) {
			isPrime = false;
			break;
		} else {
			isPrime = true;
		}

	}
	return isPrime;
}

int biggestDigit(int x) {
	int biggest = 0;

	while(x >= 10) {
		if(biggest < (x % 10)) biggest = (x % 10);
		x = x / 10;
	} 
	return biggest;	

}

int main() {
	int inputNumber;

	cout << "Please choose a number greater than 1000. ";
	cin >> inputNumber;

	while(inputNumber < 1000) {
		cout << "Please choose a number greater than 1000. ";
		cin >> inputNumber;
	}

	cout << "The biggest digit is: " << biggestDigit(inputNumber) << endl;
	cout << "The number is prime: ";
	if(isPrime(inputNumber)) cout << "True" << endl;
	else cout << "False" << endl;

	//cout << isPrime(inputNumber) << endl;
	
	cout << "The prime numbers from 0-100 are: " << endl;
	for(int i = 0; i <= 100; i++) {
		if(isPrime(i)) cout << i << " ";
	}
	
	cout << endl;
	return 0;
}
