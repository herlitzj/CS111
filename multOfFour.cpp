#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Choose a number. ";
	cin >> num;
	if (num % 4 == 0) {
		cout << "The number " << num << " is a multiple of four" << endl;	
	} else {
		cout << "The number " << num << " is not a multiple of four" << endl;
	}


	return 0;
}
