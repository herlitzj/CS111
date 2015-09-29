#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Please enter a number divisible by 5.";
	cin >> num;
	while(num % 5 != 0) {
		cout << "Please enter a number divisible by 5.";
		cin >> num;
	}



	return 0;
}
