#include <iostream>

class myDateAndTime //PUBLIC by default
{
    int year;   
    public:
            int get_year(){
                return year;
            }
            myDateAndTime(int year_in){
                if(!set_year(year_in)){
                    year=2019;
                }
            }
            ~myDateAndTime(){
                printf("OBJECT DESTRUCTED");
            }
        void add_year(){
            year++; 
        }
        bool set_year(int new_year){
            if (new_year<2019) return false;
            year=new_year;
            return true;
    }
};

int main(){
    myDateAndTime clock(2020); //Intitlization
   printf("YEAR IS: %d", clock.get_year());
    return 0;
}