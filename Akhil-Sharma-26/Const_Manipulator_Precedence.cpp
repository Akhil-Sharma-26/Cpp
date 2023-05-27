#include<iostream>
#include<iomanip> //It contains the commands the commands like 

using namespace std;


int main(){
    //**********CONSTANTS*************
    int a = 12;
    cout<<"The value of a was:" <<a<<endl;
    a =52;
    cout<<"The value of a is:" <<a<<endl;
    // The value of variable can be changed easily in C++ and to keep the value constant throughtout the program, We use Const keyword.
    const float pi =3.14;
    cout<<"The value of pi is: "<<pi<<endl;
    //If we try to change the value of pi now. IT will show an error.
    cout<<endl<<endl;


    //************MANIPULATORS***********
    //-->endl is an manipulator
    //setw() is also. Under the file iomanip. Used to set a specific width to the output.

    int b=2, c=232, d=2312, e=23234;
    cout<<"The value of b without setw is:"<<b<<endl;
    cout<<"The value of c without setw is:"<<c<<endl;
    cout<<"The value of d without setw is:"<<d<<endl;
    cout<<"The value of e without setw is:"<<e<<endl;


    cout<<"The value of b with setw is:"<<setw(5)<<b<<endl;
    cout<<"The value of c with setw is:"<<setw(5)<<c<<endl;
    cout<<"The value of d with setw is:"<<setw(5)<<d<<endl;
    cout<<"The value of e with setw is:"<<setw(5)<<e<<endl<<endl<<endl;
    


    //******Operator Precedence and Operator Associativity******
    //The concept of BODMAS is kind of not applicable in C++. We have to see the Operator precedence in the website  https://en.cppreference.com/w/cpp/language/operator_precedence
    //Multiply divide comes first than add and sub.
    //Associativity also matters
    int num1=2, num2=4;
    int num3=num1*9+num2+42+num1/2;
    float num4=pi*num2*num2+num3*num1;
    cout<<"The value of num3 is "<<num3<<endl<<"The value of num4 is: "<<num4<<endl;



    
    




    return 0;
}