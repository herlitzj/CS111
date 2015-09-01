#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main() {
	
	//a simple program for printing all prime numbers between 1
	//and a number chosen by the user.
	
	int num, i, j;
	
	cout << "Please choose a number" << endl;
	cin >> num;

	for (i = 1; i <= num; i++) {
		bool prime = true;

		for (j = 2; j <= sqrt(i) ; j++) {
			if (i % j == 0) {
			prime = false;
			}		
		}

		if (prime) {
			cout << i << endl;	
		}
	}

	return 0;
}
