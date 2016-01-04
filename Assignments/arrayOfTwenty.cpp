#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));
	int randomArray[20];

	for(int i = 0; i < 20; i++){
		bool next = false;
		while(next == false) {
			int counter = 0;
			int randomNumber = rand() % 19 +1;
			for(int j = 0; j < 20; j++) {
				if(randomArray[j] == randomNumber) counter++;
				//cout << "Arr: " << randomArray[j] << "Num: " << randomNumber << endl;
				//cout << "Count: " << counter << endl;
			}
			if(counter == 0) next = true;
			randomArray[i] = randomNumber;
		}
	}

	cout << randomArray[1];



	return 0;
}
