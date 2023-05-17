//4 Ways to Initialize built-in type: ASSIGNMENT , FUNCTION, SYNTAX or CALLING A CONSTRUCTOR

#include<iostream>

int main(){ 
    printf("INITIALIZING TYPES");
    int a = 1; //ASSIGNMENT
    int b = int(2); //FUNCTION
    int c(3); //SYNTAX
    int d{4}; //CALLING A CONSTRUCTOR; NEW TO C++
    int e = {5}; //SAME AS Dx
    printf("A = %d \nB = %d \nC = %d \nD = %d \nE = %d\n ",a,b,c,d,e);

    printf("INITIALIZING ARRAYS");
    int birth_years[] = {1920, 2001, 2011, 2019};
    int john[] = {1998}; //C++11
}