#include<iostream>
using namespace std;
//FOR CHECKING PRIME AND NON PRIME

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    int i;
    cin>>n;
    for( i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non Prime"<<endl;
            break;
        }
        // else{
        //     cout<<"Prime"<<endl;

        
    }
    if(i==n){
    cout<<"Prime"<<endl;
    }
    if(n==1){
        cout<<"Prime";
    }



    // **********
    return 0;
}