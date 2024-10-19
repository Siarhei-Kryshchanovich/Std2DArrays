#include "Std2DArrays_v1.h"
#include <iostream>

using namespace std;
void fillArray(array <array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
	if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
		throw invalid_argument("Incorrect number of rows or columns");
	}
	int startValue = 1;
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++) {
			arr[i][j] = startValue;
			startValue++;
		}
	}
}
void printArray(array <array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
	if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
		throw invalid_argument("Incorrect number of rows or columns");
	}
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}