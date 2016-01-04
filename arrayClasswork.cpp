#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int arraySum(int finalGrades[][30], int row, int col) {
	int arraySum = 0;

	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			arraySum = arraySum + finalGrades[i][j];
		}
	}
	
	return arraySum;

}

int arrayAverage(int finalGrades[][30], int row, int col) {
	return arraySum(finalGrades, row, col) / (row * col);

}


int arrayMinMax(int finalGrades[][30], int row, int col, string minMax) {
	int min = 101, max = 0;

	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			if(min > finalGrades[i][j]) min = finalGrades[i][j];
			if(max < finalGrades[i][j]) max = finalGrades[i][j];
		}
	}

	if(minMax == "min") return min;
	if(minMax == "max") return max;

}


void arrayHistogram(int histogram[], int finalGrades[][30]) {

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 30; j++) {
			int key = finalGrades[i][j];
			histogram[key - 40] = histogram[key - 40] + 1;
		}
	}
}


int main() {
	int randGrade;
	int finalGrades[4][30];

	srand(time(NULL));

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 30; j++) {
			finalGrades[i][j] = rand() % 60 + 40;
		}
	}

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 30; j++) {
			cout << finalGrades[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Array Sum: " << arraySum(finalGrades, 4, 30) << endl;
	cout << "Array Average: " << arrayAverage(finalGrades, 4, 30) << endl;
	cout << "Array Max: " << arrayMinMax(finalGrades, 4, 30, "min") << endl;
	cout << "Array Min: " << arrayMinMax(finalGrades, 4, 30, "max") << endl;
	int histogram[60];
	for(int i = 0; i < 60; i++) histogram[i] = 0;
	arrayHistogram(histogram, finalGrades);
	for(int i = 0; i < 60; i++) {
		cout << i + 40;
		for(int j = histogram[i]; j > 0; j--) {
			cout << ".";
		}
		cout << endl;
	}

	return 0;
}
