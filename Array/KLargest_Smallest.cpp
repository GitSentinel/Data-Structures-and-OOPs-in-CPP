// Given an array arr[] of size N and a number K, where K is smaller than the size of the array. Find the K’th smallest element in the given array. Given that all array elements are distinct


#include <bits/stdc++.h>
using namespace std;
 
// Function to find the kth smallest array element using priority queue
int kthSmallest(int arr[], int N, int K)
{
    // Create a max heap (priority queue)
    priority_queue<int> pq;
 
    // Iterate through the array elements
    for (int i = 0; i < N; i++) {
        // Push the current element onto the max heap
        pq.push(arr[i]);
 
        // If the size of the max heap exceeds K, remove the largest element
        if (pq.size() > K)
            pq.pop();
    }
 
    // Return the Kth smallest element (top of the max heap)
    return pq.top();
}
 
// Function to find the kth largest array element using priority queue
int kthLargest(int arr[], int N, int K)
{
    // Create a min heap
    priority_queue<int, vector<int>, greater<int>> pq;

    // Iterate through the array elements
    for (int i = 0; i < N; i++) {
        // Push the current element onto the max heap
        pq.push(arr[i]);
 
        // If the size of the max heap exceeds K, remove the largest element
        if (pq.size() > K)
            pq.pop();
    }
 
    // Return the Kth smallest element (top of the max heap)
    return pq.top();
}

// Driver's code:
int main()
{
    int N = 10;
    int arr[N] = { 10, 5, 4, 3, 48, 6, 2, 33, 53, 10 };
    int K = 4;
 
    // Function call
    cout << "Kth Smallest Element is: " << kthSmallest(arr, N, K);
    cout << endl;
    cout << "Kth Largest Element is: " << kthLargest(arr, N, K);
    
    return 0;
}
