#include <iostream>
using namespace std;

int main() {
	
	int counter = 0;
	
	for (int i = 100; i <= 1000; i++) {
		if (i % 5 == 0 && i % 6 == 0) {
			counter ++;
			cout << i << " ";

			if (counter % 10 == 0) {
				cout << endl;
			}
		}
	}

	return 0;
}
