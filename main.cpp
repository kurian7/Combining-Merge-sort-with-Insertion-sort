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
 
    //Populating array
    for (int i = 0 ; i < size  ; i++)
       array[i] = rand() % size;
     
  
    
    mergeSort(array, 0, size - 1, threshold);
 
    //Printing array
    for (int i = 0; i < size - 1; i++){
       cout << array[i] << " ," ;
    }
 
    return 0;
}
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
