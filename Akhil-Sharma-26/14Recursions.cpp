#include<iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)  // As fib(3) and fib(2) is called again and again, Therfore recurssionnis not always beneficial.
int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
    return n* factorial(n-1);
    }
    // Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;
}
int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl; 
    cout<<"The term in fibonacci sequence at position "<<a<< " is "<<fib(a)<<endl;
    return 0;     
}