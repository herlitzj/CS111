#include <iostream>
using namespace std;

int doubleNum(int n) {
	int m = n*2;
	return m;
}

int main() {
	int var;
	int z;

	cout << "This is a test \n";
	cin >> var;

	z =  doubleNum(var);
	cout << z << endl;


	return 0;
}


