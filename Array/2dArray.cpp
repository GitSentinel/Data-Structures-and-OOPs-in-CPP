#include <bits/stdc++.h>
using namespace std;

void func (int a[][3], int rows, int cols){
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<a[0]<<endl;
    cout<<&a[0][0]<<endl;
    cout<<a[0][0]<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(a[0])<<endl;
    // return 0;
}

int main(){
    int ar[2][3] = {10,20,30,40,50};
    func(ar,2,3);
    return 0;
}       