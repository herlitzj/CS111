#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double testNum;
	int finalNum;
	cout << "Please enter a positive integer. ";
	cin >> testNum;
	finalNum = testNum;
	while(finalNum < 0 || fmod(testNum, 1.0) != 0) {
		cout << "Please enter a legal positive integer. ";
		cin >> testNum;
		finalNum = testNum;
	}

	while(finalNum > 0) {
		cout << finalNum << endl;
		finalNum = finalNum/10;
	}

	return 0;
}
