#include <iostream>
using namespace std;
int myFactorial(int integer) {
	if(integer ==1)
		return 1;
	else {
		return(integer * (myFactorial(integer - 1)));
	}
}


int doubleNum(int number) {
	return number * 2;
}

int main() {

	int num;

	cout << "Choose a number. ";
	cin >> num;

	cout << myFactorial(num) << endl;
	cout << doubleNum(num) << endl;

	return 0;
}
