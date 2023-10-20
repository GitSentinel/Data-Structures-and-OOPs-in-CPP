// Given an array A[] consisting of only 0s, 1s, and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

#include <iostream>
#include <algorithm>
#include <valarray>
using namespace std;
 
// Sort using sort function or any sorting technique 
void sort012UsingFunction(int arr[], int n)
{
    sort(arr, arr+n);
    // Time Complexity : O(nlogn)
}
 
// Sort 0, 1, 2 using Dutch National Flag algorithm
void sort012_DutchNationalFlag(int arr[], int n){
    int lo = 0;
    int hi = n - 1;
    int mid = 0;
 
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (arr[mid]) {
 
        // If the element is 0
        case 0:
            swap(arr[lo++], arr[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(arr[mid], arr[hi--]);
            break;
        }
    }
}

// Function to print array arr[]
void printArray(int arr[], int arr_size)
{
    // Iterate and print every element
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}
 
// Driver Code
int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // sort012UsingFunction(arr, n);

    sort012_DutchNationalFlag(arr, n);
    printArray(arr, n);
 
    return 0;
}