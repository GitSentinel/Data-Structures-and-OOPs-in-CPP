// pehle chote se bada order me daalo, jese hi sabse bada 
// element miljaega hum log waha se decreasing order me ajaenge


// sol :
// pehle sort krliya, fir easily ascending order me daala, first half ko that is n/2th index tak
// fir second half ke liye hum logo ne peeche se bache hue half ko print karwaya ezzz
#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<int> arr = {8, 7, 1, 6, 5, 9};
   int n = arr.size();
   
   sort(arr.begin(), arr.end());
   
   for(int i=0; i<n/2; i++){
       cout<<arr[i]<<" ";
   }
   
   for(int j=n-1; j>=n/2; j--){
       cout<<arr[j]<<" ";
   }
   
   
}