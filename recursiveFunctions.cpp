#include <iostream>
using namespace std;
string rectangle(int num) {
	if(num == 1) return "**********\n";
	else return rectangle(num - 1) + rectangle(1);
}

int triangle(int num) {
	if(num == 0) return 0;
	else return num + triangle(num - 1);
}

int secondDigit(int num) {
	if(num / 100 == 0) return num % 10;
	else secondDigit(num / 10);
}

string printBinary(int num) {
	if(num == 1) return "1";
	if(num == 0) return "0";
	return printBinary(num / 2) + printBinary(num % 2);
}

int main() {

	cout << "Rectangle:" << endl << rectangle(5) << endl << endl;
	cout << "Triangle: " << endl << triangle(5) << endl << endl;
	cout << "SecondDigit:" << endl << secondDigit(7295) << endl << endl;
	cout << "PrintBinary: " << endl << printBinary(23) << endl << endl;
	return 0;

}
