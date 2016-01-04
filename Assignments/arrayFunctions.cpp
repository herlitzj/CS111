#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int findMax(int array[], int size) {
	int max = 0;
	
	for(int i = 0; i < size; i++) {
		if(array[i] > max) max = array[i];
	}

	return max;

}

int findMin(int array[], int size) {
	int min = 1000000;

	for(int i = 0; i < size; i++) {
		if(array[i] < min) min = array[i];
	}
	return min;
}

double findAverage(int array[], int size) {
	double avg = 0.0;
	for(int i = 0; i < size; i++) {
		avg = avg + array[i];
	}
	avg = avg/size;
	return avg;

}

int absolute(int number) {
	if(number > 0) return number;
	else return -1 * number;

}

int findMinGap(int array[], int size) {
	int minGap = 10000;
	for(int i = 1; i < size; i++) {
		if(absolute(array[i] - array[i-1]) < minGap) minGap = absolute(array[i] - array[i-1]);
	}

	return minGap;

}

int findGapSum(int array[], int size) {
	int gapSum = 0;
	for(int i = 1; i < size; i++) {
		gapSum = gapSum + absolute(array[i] - array[i-1]);
	}

	return gapSum;

}


int main() {
	int arraySize = 20;
	int array[arraySize];

	srand(time(NULL));
	
	for(int i = 0; i <= arraySize; i++) {
		array[i] = rand() % 40 + 60;
	}

	cout << "The Array is: " << endl;	
	for(int i = 0; i < sizeof(array)/sizeof(*array); i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	
	cout << "The Max of the Array is: " << findMax(array, arraySize) << endl;
	cout << "The Min of the Array is: " << findMin(array, arraySize) << endl;
	cout << "The Average of the Array is: " << findAverage(array, arraySize) << endl;
	cout << "The MinGap of the Array is: " << findMinGap(array, arraySize) << endl;
	cout << "The GapSum of the Array is: " << findGapSum(array, arraySize) << endl;

	return 0;
}
