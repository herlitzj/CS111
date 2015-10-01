#include <iostream>
using namespace std;
int main() {
	int counter = 0;
	for(int i=1; i<500; i++) {
		if(i%2) {
			cout << i << " ";
			counter++;
			if(counter%8 == 0) cout << endl;
		}
	}
	cout << endl;
	return 0;
}
