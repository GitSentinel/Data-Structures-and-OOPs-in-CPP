#include <bits/stdc++.h>
using namespace std;

void frequency(int arr1[], int n){
    
    unordered_map<int, int> map;
    
    for(int i = 0; i<n; i++){
        
        // jab naya element aya toh uska key value pair bana and value 1 hui
        // agar vo element firse agya hai toh uski value increment hojaegi
        map[arr1[i]]++;
    }
    
    // auto will determine konsa data type hai variable konsa
    // x will be determining the key value pair
    // first aur second key value pair ke elemnents ko nikal ne ke liye
    for(auto x : map){
        cout<< x.first << " " << x.second << endl; 
    }


}

int main() {
   int arr[] = { 5, 4, 3, 2, 1};
   int n = sizeof(arr)/sizeof(arr[0]);
   
   frequency(arr, n);
   return 0;
}