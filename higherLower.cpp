#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int num;
	srand (time(NULL));
	int randNum = rand() % 100;
	cout << "Guess a number between 1 and 100. ";
	cin >> num;

	while(num != randNum) {
		if(num < randNum) {
			cout << "Guess a higher number. ";
			cin >> num;
		} else {
			cout << "Guess a lower number. ";
			cin >> num;
		}
	}

	cout << "You win!" << endl;


	return 0;
}
