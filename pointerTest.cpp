#include <iostream>
using namespace std;
int main()
{
	int x[2][2] = {{1,2},{3,4}};
	int *p;

	p = &x;
	cout << p << endl;
	cout << *p << endl;

	return 0;


}
