#include<iostream>
using namespace std;
inline int prod(int a, int b){ //Inline puts the value of external function into the main function directly i.e It replaces the fucntion call in main function directly with the fucntion value whereever it has been called. It is usually bene=ificial only when the function is not of a big load.
// not recommended when recurrsion and static variables are involved.
    return a*b;
} //Inline is a just a request to a compiler. It depends on the compiler to accept this request.
int stat(int a, int b){
    static int c=0; //This executes only once.
    c+=1; //Next time this function is run, the value of c will be retained
    return a*b+c;
}
float moneyRecieved(int currentMoney, float factor=1.05){ //As we have given value of factor here, even if we don't assign any value to factor in the main function, the compiler will take this as a default. This is known as default argument.
    return currentMoney * factor;
}
// int strlen(const char *p){   //Const is used to make the value of function constant
    
// }
int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<prod(a,b)<<endl;
    cout<<"The use of static variable: "<<stat(a,b)<<endl;
    cout<<"The use of static variable: "<<stat(a,b)<<endl;
    cout<<"The use of static variable: "<<stat(a,b)<<endl;
    cout<<"The use of static variable: "<<stat(a,b)<<endl;
    cout<<"The use of static variable: "<<stat(a,b)<<endl;
    int money=1000000;
    cout<<"As you have "<<money<< "Rs in your bank account, you are gonna recieve "<<moneyRecieved(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIPs: As you have "<<money<< "Rs in your bank account, you are gonna recieve "<<moneyRecieved(money,1.12) /*Default arguments should be in the extreme right*/<<"Rs after 1 year"<<endl; 

    return 0;     
}