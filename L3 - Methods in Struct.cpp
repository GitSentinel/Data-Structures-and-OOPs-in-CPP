#include <iostream>


struct myDateAndTime
{
    void add_year(){
        year++; 
    }
    int year;
};

int main(){
    myDateAndTime md;
    md.year=2023;
    printf("YEAR: %d", md.year);
    md.add_year();
    printf("\nYEAR: %d", md.year);
    return 0;
}