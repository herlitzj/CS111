#include <iostream>
using namespace std;

int bigDown(int x) {
	
	if(x < 10) {
		return x;
	} else {
		if(x % 10 > 4) {
			return 10 * bigDown(x / 10) + x % 10 - 1;
		} else {
			return 10 * bigDown(x / 10) + x % 10;
		}
	}

}


int evens(int x) {

	if(x < 10) {
		if(x % 2 == 0) return x;
		else return 0;
	} else {
		if(x % 2 == 0) {
			return 10 * evens(x / 10) + x % 10;
		} else {
			return evens(x / 10);
		}
	}

}



int useRecursion(int x) {
	if(x < 100) {
		return (x % 10) + (x / 10);
	} else {
		useRecursion(x/10);
	}

}




int main() {
	cout << bigDown(10) << endl; // prints 10
	cout << bigDown(2654) << endl; // prints 2544
	cout << bigDown(19683) << endl; // prints 18573
	cout << evens(16) << endl; // prints 6
	cout << evens(666) << endl; // prints 666
	cout << evens(777) << endl; // prints 0
	cout << useRecursion(567982) << endl; //prints 11
	cout << useRecursion(107982) << endl; //prints 1
	cout << useRecursion(7) << endl; //prints 7
	return 0;
}
