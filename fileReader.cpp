#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

void print_contents(string file_name) {
	ifstream f;
        f.open(file_name.c_str());
        cout << "\nThe file " << file_name << " contains: \n";
        while (!f.eof()) {
            for(int i = 0; i < 50; i++) {
                    string line;
                    if (getline(f, line) != "\n") cout << line;
            }
            cout << endl;
        }
        f.close();

}

void print_total(string file_name) {
	ifstream f;
	f.open(file_name.c_str());
        int total = 0;
        cout << "The sum of all integers in " << file_name << " is: ";
        while (!f.eof()) {
                string line;
                if (getline(f, line) != "\n") total = total + atoi(line.c_str());
        }
        cout << total << endl;
        f.close();
	cout << endl;
}

void print_number_totals(string file_name) {
	ifstream f;
        f.open(file_name.c_str());
        int count[9] = {0,0,0,0,0,0,0,0,0};
	cout << "The sum of individual integers in " << file_name << " is:\n";
	while (!f.eof()) {
		string line;
		if(getline(f, line) != "\n") {
			int number = atoi(line.c_str());
			count[number]++;
		}
	}

	for(int i = 1; i < 10; i++) {
		cout << i << ": " << count[i] << endl;
	}
	f.close();
	cout << endl;
	
}

int main() {
	string file_name;
	cout << "What file would you like to open? ";
	cin >> file_name;
	
	ifstream f;
	f.open(file_name.c_str());
	if (f == 0) {
		cout << "File does not exist. Please try again.\n";
		return 0;
	}

	print_contents(file_name);
	print_total(file_name);
	print_number_totals(file_name);
	return 0;
}
