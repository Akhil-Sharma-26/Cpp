#include<iostream> //iostream is a header file which contains and defines functions like cout and cin.
/* There are two types of header files:
1: System Header files--> They files come with there own compiler. For refrence, Check out this website:: https://en.cppreference.com/w/cpp/header */
/*2: User defined Header files--> These files are created by the user.
Example:*/
#include"hello.h" //This will only work if 'hello.h' file is present the current directory.

using namespace std;

int main(){
    int a=7, b=3;
    cout<<"The different types of operators in C++ are:"<<endl;
    cout<<"1-->Arithematic Operators:"<<endl;
    cout<<"The value of a+b is:"<<(a+b)<<endl;  //use of parenthesis is a good practice
    cout<<"The value of a-b is:"<<(a-b)<<endl;  
    cout<<"The value of a*b is:"<<(a*b)<<endl;  
    cout<<"The value of a/b is:"<<(a/b)<<endl;  //resturns the GIF value of quotient
    cout<<"The value of a%b is:"<<(a%b)<<endl;  //remainder
    cout<<"The value of a++ is:"<<(a++)<<endl;  //First print then increase
    cout<<"The value of a-- is:"<<(a--)<<endl;  //First print then decrease
    cout<<"The value of ++a is:"<<(++a)<<endl;  //First increase then print
    cout<<"The value of --a is:"<<(--a)<<endl;  //~
    cout<<endl;


    cout<<"2--> Assignment Operators:"<<endl;
    cout<<"These are used to assign a value to a variable. Like: a=3,b=34 etc."<<endl;
    cout<<endl;


    cout<<"3-->Comparison Operators:"<<endl;
    cout<<"The value of a==b is:"<<(a==b)<<endl; //True only if a=b
    cout<<"The value of a!=b is:"<<(a!=b)<<endl; //T if a is not = b
    cout<<"The value of a<=b is:"<<(a<=b)<<endl; 
    cout<<"The value of a>=b is:"<<(a>=b)<<endl;
    cout<<"The value of a>b is:"<<(a>b)<<endl;
    cout<<"The value of a<b is:"<<(a<b)<<endl;
    cout<<endl;


    cout<<"4-->Logical Operators:"<<endl;
    cout<<"The value of AND operator is:"<<((a==b) && (a>b))<<endl; //AND Operator
    cout<<"The value of OR operator is:"<<((a==b) || (a<=b))<<endl; //OR Operator
    cout<<"The value of NOT operator is:"<<(!(a==b)) <<endl; //NOT Operator



    //Ctrl+shift+A = TO run the code
    //alt+shift+ mouse drag = multiple cursors
    //ctrl+Shift+Del= Line delete
    //alt+shift+up/down key= To copy the line down

    return 0;
}
