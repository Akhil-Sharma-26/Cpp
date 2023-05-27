#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a==b==c){
        cout<<"Equilaeral";
    }

    else if(a==c||b==c||a==b){
        cout<<"Isosceles";
        
    }
    else{
        cout<<"scalene";
    }
    return 0;
}