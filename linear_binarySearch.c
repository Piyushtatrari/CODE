#include <stdio.h>

int LinearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    int low = 0;
    int mid;
    int high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }

        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{

    // int arr[]= {1 , 34, 54, 23 ,5 ,6 ,32 , 21 , 6 ,7 ,65};  unsorted for linear search

    int arr[] = {1, 3, 4, 5, 8, 9, 12, 14, 18, 21, 31, 45, 66}; // sorted for binary search
    int size = sizeof(arr) / sizeof(int);
    int element = 45;
   // int searchIndex = linearSearch(arr, size, element);
    int searchIndex = binarySearch(arr, size, element);

    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}