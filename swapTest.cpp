#include <iostream>
using namespace std;

int swap(int x, int y) {
	int t = x;
	x = y;
	y = t;
}

int main() {
	int a = 10, b = 20;
	cout << "before" << "a: " << a << "b: " << b << endl;
	swap(a, b);
	cout << "after" << "a: " << a << "b: " << b << endl;
	return 0;
}
