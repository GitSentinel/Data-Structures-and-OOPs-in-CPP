#include <iostream>

struct myDateAndTime //PUBLIC by default
{
    void add_year(){
        year++; 
    }

    bool set_year(int new_year){
        if (new_year<2019) return false;
        year=new_year;
        return true;
    }

    int get_year(){
        return year;
    }

    private: int year;
};

int main(){
    myDateAndTime md;
    md.set_year(2019);
    printf("YEAR: %d", md.get_year());
    md.set_year(2023);
    printf("\nYEAR: %d", md.get_year());
    return 0;
}