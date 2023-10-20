//Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the array.

#include <iostream> 
using namespace std; 
  
// Find the peak element in the array using Linear Search
int findPeakUsingLinear(int arr[], int n) 
{ 
    // first or last element is peak element 
    if (n == 1) 
        return 0; 
    if (arr[0] >= arr[1]) 
        return 0; 
    if (arr[n - 1] >= arr[n - 2]) 
        return n - 1; 
  
    // check for every other element 
    for (int i = 1; i < n - 1; i++) { 
  
        // check if the neighbors are smaller 
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) 
            return i; 
    } 
    return -1;
} 

// Find the peak in the array using Binary Search
int findPeakUsingBinary(int arr[], int n){
    int l = 0; 
    int r = n-1; 
    int mid; 
    
    while (l <= r) { 
        
        // finding mid by binary right shifting. 
        mid = (l + r) >> 1; 
        
        // first case if mid is the answer 
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) 
            and (mid == n - 1 || arr[mid + 1] <= arr[mid])) 
            break; 
        
        // move the right pointer 
        if (mid > 0 and arr[mid - 1] > arr[mid]) 
            r = mid - 1; 
        
        // move the left pointer 
        else
            l = mid + 1; 
    } 
    
    return mid; 
}

  
// Driver Code 
int main() 
{ 
    int n;  cout << "Enter the array size : ";  
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    } 

    // The input array is :
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }

    cout << "Index(0-based) of the peak point is " << findPeakUsingLinear(arr, n); 
    cout << endl;
    cout << "Index(0-based) of the peak point is " << findPeakUsingBinary(arr, n);

    return 0; 
} 