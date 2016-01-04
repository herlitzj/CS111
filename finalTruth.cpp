#include <iostream>
using namespace std;

int finalTruth(bool x[], int size) {
	int finalTrue = 0;
	for(int i = 0; i < size; i++) {
		if(x[i] == true) finalTrue = i;
	}
	return finalTrue;
}

int main() {
	bool x[5] = {true, false, true, false, false};
	cout << finalTruth(x, 5) << endl;
	return 0;
}
