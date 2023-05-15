#include <iostream>

union Variant{
    char myString[10];
    int myInteger;
    double myDouble;
};

int main(){
    Variant v;
    v.myInteger = 32;
    printf("The union integer: %d \n", v.myInteger);
    v.myDouble = 3.928428;
    printf("My union double: %f \n", v.myDouble);
    printf("My union integer 2: %d", v.myInteger);
    return 0;
}