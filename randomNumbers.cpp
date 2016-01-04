#include <iostream>
#include <cstdlib>
using namespace std;
int main() {

	srand(123);

	cout << rand()% 8999 + 1000;
	cout << endl;
	for(int i = 0; i < 10; i++) cout << rand() %10 + 10 << " ";
	cout << endl;
	for(int i = 0; i < 5; i++) cout << -1 * (rand() % 8 + 1) << " ";
	cout << endl;
	for(int i = 0; i < 10; i++) cout << rand() % 899 + 100 << " ";
	cout << endl;

	return 0;
}
