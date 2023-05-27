#include<iostream>
using namespace std;


int c = 40; //Its is declared globally

int main(){

    //*****BUILTIN Datatypes*****
    // Defined by th language and can be used directly
    int a, b, c;
    cout<<"The value of a is:"<<endl;
    cin>>a;
    cout<<"The value of b is:"<<endl;
    cin>>b;
    c = a+b;
    cout<<"The value of c is" <<c<<endl; //This will give output of c as in local variable c
    cout<<"The value of global c is "<<::c; //This will give global c as the Output
    //Hence Global and local variable can have same name but the preference will  be given to the local variable, if it resides inside a function. :))
    cout<<endl;


    // *********Float, Double and Long Double Literals*********
    float d = 34.6; //Float and long double are double by default and not float or long double. We can see it clearly by using sizeof keyword. :))
    float e = 34.6F; //It is a float as we used the "F" with it
    long double f = 34.6L;

    
    cout<<"The size of 34.4 is " <<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is " <<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is " <<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is " <<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is " <<sizeof(34.4L)<<endl;


    //*******Reference Variables*******
    // ---> Using a 2 or more variables for the same reference variabele
    int x= 450;
    int & y= x; //"&" is used to make a reference variable
    cout<<x<<endl<<y<<endl;
    cout<<endl;



    //***************Type Casting*********
    //--> Used to convert one datatype into another datatype
    int num1=45;
    float num2=45.53;
    cout<<"The value of a is "<<(float)num1<<endl;
    cout<<"The value of a is "<<float(num1)<<endl;
    cout<<"The value of b is "<<(int)num2<<endl;
    cout<<"The value of b is "<<int(num2)<<endl;
    int num3= int(b);

    //The parenthesis can be place at either datatype or variable

    cout<<"The expression is "<<num1 + num2<<endl;
    cout<<"The expression is "<<num1 + int(num2)<<endl;
    cout<<"The expression is "<<num1 + (int)num2<<endl;

    return 0;
}