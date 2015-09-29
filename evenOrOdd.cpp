#include <iostream>
using namespace std;
int main() {
	int num, answer;
	cout << "Enter an integer: ";
	cin >> num;
	
	if (num % 2 == 0) {
		answer = num / 2;
	} else {
		answer = num * 3 + 1;
	}

	cout << "The answer is: " << answer << endl;



	return 0;
}
