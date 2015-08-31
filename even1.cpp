#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int num;
	cout << "Please enter a number: " << endl;
	cin >> num;

	if (num % 7 == 0) {
		cout << "The number is divisible by 7." << endl;
	} else {
		cout << "The number is not divisible by 7." << endl;
	}


	return 0;
}