#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"The value of a,b,c is: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c ;
    if(a>b){
        if(a>c){
            cout<<a;
        }
        else{
            cout<<c;
        }
    }
    else{
        if(b>c){
            cout<<b;
        }
        else{
            cout<<c;

        }
    }
    return 0;
}