#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;

	for (n = 1; pow(n,2) < 12000; n++) {
	}
	cout << "Smallest integer n such that n^2 is greater than 12,000: " << n << endl;

	for (n = 12000; pow(n,3) > 12000; n--) {
	}

	cout << "Largest integer n such that n^3 is less than 12,000: " << n << endl;


	return 0;
}
