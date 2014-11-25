#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void mergeSort(int array[], int min, int max, int threshold);

int main()
{
	const int threshold = 10;
	const int size = 100;
	int array[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		array[i] = rand() % size;

	mergeSort(array, 0, size - 1, threshold);
	for (int i = 0; i < size - 1; i++){
		cout << array[i] << " ,";
	}
	cin.get();
	return 0;
}
