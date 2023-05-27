#include<iostream>
using namespace std;

int main(){
    float num1,num2;
    char oper;
    cin>>num1>>num2>>oper;
    
    
    switch (oper)
    {
    case '+':
        cout<<num1+num2<<endl;
        break;
    case '-':
        cout<<num1-num2<<endl;
        break;
    case '*':
    cout<<num1*num2<<endl;
    break;
    case '/':
    cout<<num1/num2<<endl;
    break;
    // case '%':
    // cout<<num1%num2<<endl;
    // break;        
    
    default:
    cout<<"LOL"<<endl;

        break;
    }
    return 0;
}