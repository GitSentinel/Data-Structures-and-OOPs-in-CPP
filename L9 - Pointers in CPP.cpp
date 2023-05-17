#include <iostream>
using namespace std;
//  * - Declaring Pointers
// & - Return the address of an object
//    sizeof(int*); //Will return 4 in 32 bit system, 8 in 64 bit machine
int main(){
    int a = 92;
    cout<<a<<endl;
    int *pi{&a};
    *pi=600;
    cout<<a<<endl;
    int j=*pi;
}