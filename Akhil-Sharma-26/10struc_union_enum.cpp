#include<iostream>
using namespace std;

// **** STRUCTURES ****
// Structure can be created outside of ,main function and then can be added in the main function. 
    union money
    {
        int rice;
        char car;
        float Dollar;
        /* data */
    };
    // ** STRUCTURE **
    struct employee
    {
        /* data */
        int eID;
        char favChar;
        float Salary;
        double points;
    };
    // typedef struct employee
    // {
    //     /* data */
    //     int eID;
    //     char favChar;
    //     float Salary;
    //     double points;
    // } emp;
    
    //If we use typedef while creating a structure, and after ending the bracket we can add
    // small snippet which we can use to write in main function in short format.

int main(){
    struct employee ron;
    struct employee Draco; //In this way we can as many sub structure in a structure.
    ron.eID=1;
    ron.favChar='a';
    ron.Salary=1200000;
    ron.points=12.34;
    cout<<"The eID "<<ron.eID<<endl;
    cout<<"The favChar "<<ron.
    favChar<<endl;
    cout<<"The salary "<<ron.Salary<<endl;
    cout<<"The points " <<ron.
    points<<endl;
    
    // **** UNIONS ****
    //Unions are used to allocate only the highest momory size in a structure, or iin other words: The compiler chooses the data type which has maximum memory for the allocation.
    //Only a single sub union can be used a  time. This is also created outside tge main function.

    union money a;
    a.rice=1354;
    // a.Dollar=13.21; //If we use 2 subunion types, it outputs a garbage value.
    cout<<a.rice<<endl;
    ;
    
    // **** ENUM ****
    // It is like an array but inputs only the position of the thing in the enum {} 
    enum Meal{breakfast, lunch,dinner};
    Meal m1= lunch;
    cout<<m1;
    
    return 0;
}