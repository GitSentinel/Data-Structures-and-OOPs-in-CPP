#include <iostream>


struct Car
{
    char make[256];
    int year;
    int wheels;
    bool isRunning;
};

int main(){
    Car myBMW;
    myBMW.year = 2001;
    myBMW.isRunning = true;
    printf("My BMW year is: %d", myBMW.year);
    return 0;
}