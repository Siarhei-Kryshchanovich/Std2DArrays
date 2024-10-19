#include "Std2DArrays_v1.h"
#include <iostream>

using namespace std;
void fillArray(array <array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
	if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
		throw invalid_argument("Incorrect number of rows or columns");
	}
	int startValue = 1;
	// SE VER filling
	for (int col = columns - 1; col >= 0; --col) {
		for (int row = rows - 1; row >= 0; --row) {
			arr[row][col] = startValue++;
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