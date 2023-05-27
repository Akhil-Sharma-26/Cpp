#include<iostream>
using namespace std;

int main(){
    //what is a pointer? ---> It is a data type which holds the address of other data types.
    int a=3;
    int* b= &a;

    // & ---> (address of) Operator.

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * --> (Value of) dereference operator
    cout<<"The value at address b is "<<*b<<endl;



    //Advanced:
    //pointer to pointer
    int** c= &b;
    cout<<"The addresss of b is  "<<&b<<endl;
    cout<<"The addresss of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at adress value_at(value_at(c)) is "<<**c<<endl;
    return 0;
}