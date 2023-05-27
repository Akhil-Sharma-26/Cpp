#include<iostream>
using namespace std;

int sum(int a, int b) //--> Acceptable
//Formal parameters: a and b will be taking value from actual parameteers num1 and num2.
// int sum(int a,b) --> Not Acceptable
{
    int c=a+b; //Wrtite the value of c in while declaring only.
    return c;
    } // This is the value that will be returned to the function which has called the sum function.
// **FUNCTION PROTOTYPES**
// int sum(int a, int b);
    void g(){
    cout<<"\nGood morning";
};
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"Sum of num1 and num 2 is "<<sum(num1,num2); //num1 and num2 will get assigned to a and b in the sum function.
    // num1 and num2 are actual parameters . 


    // int sum(int a, int b){
    // int c;
    // c= a + b;
    // return c;} // This is the value that will be returned to the function which has called the sum function.
// }
// Code will show error if we write sum after the main function.
// But for it to run we have to use ** FUNCTION PROTOTYPE


g();
// Formal and actual parameters can also be same.
    
    
    return 0;
}