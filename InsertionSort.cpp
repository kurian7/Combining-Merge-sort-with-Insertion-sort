void insertionSort(int array[], int min, int max)
{
    int key ;
    // we loop through all elements in the original array from the min + 1 element
    for (int j = min + 1 ; j <= max ; j++)
    {
        // store the current element as the key
        key = array[j] ;
        // get the element just before the current element
        int i = j - 1 ;
        // loop through all elements from the key to the min element
        // check if the current element is smaller than the key
        while (i >= min && array[i] > key)
        {
            // we move the current element backward
            array[i+1] = array[i] ;
            i-- ;
        }
        // we finally move the key
        array[i+1] = key ;
    }
}
