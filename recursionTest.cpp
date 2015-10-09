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

int r(int n) {

	if(n<100){
		cout << "LAST ";
		return 666;
	} else {
		cout << "INSIDE ";
		return 10 * r(n/100) + n % 10;
	}
}

int main() {

	int num;

	cout << "Choose a number. ";
	cin >> num;

	//cout << myFactorial(num) << endl;
	//cout << doubleNum(num) << endl;
	cout << r(num);
	return 0;
}
