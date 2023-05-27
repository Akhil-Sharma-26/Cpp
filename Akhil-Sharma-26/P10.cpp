#include<iostream>
using namespace std;

int main(){
    int a,b,i;
    cin>>a>>b;
    for(int num1=a;num1<=b;num1++){
        for( i=2;i<num1;i++){
            if(num1%i==0){
                break;
            }
        }
        if(num1==i){
            cout<<num1<<endl;
        }
    }    
    
    return 0;
}