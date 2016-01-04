#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));

	string file_name;
	cout << "\nThis program will generate a file of 500 random 1-digit integers." << endl;
	cout << "What would you like to name this file?\n";
	cin >> file_name;

	ofstream f;
	f.open(file_name.c_str());
	
	for(int i = 0; i<500; i++) {
		int number = rand() % 9 + 1;
		f << number << "\n" << endl;
	}
	f.close();

	cout << "Program complete. File " << file_name << " saved successfully\n\n";
	return 0;
}
