#include <iostream>
using namespace std;

int main() {
	int array[10];
	double average = 0.0, finalAverage = 0.0;
	int counter = 0;
	cout << "Please choose ten integers. ";
	for (int i = 0; i < 10; i++){
		cin >> array[i];
	}

	for(int i = 0; i < 10; i++){
		average = average + array[i];
	}

	average = average/10;
	cout << average << endl;

	for(int i = 0; i < 10; i++) {
		if(array[i] >= average){
			finalAverage = finalAverage + array[i];
			counter++;
		}
	}

	cout << "The final average is: " << finalAverage / counter << endl;
	return 0;

}
