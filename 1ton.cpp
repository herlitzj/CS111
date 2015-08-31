#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int i = 0, n;

	cout << "Please choose a number." << endl;
	cin >> n;

	while (i <= n) {
		cout << i++ << endl;
		//i += 1;
	}

	return 0;
}
