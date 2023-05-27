#include<iostream>
using namespace std;
int main(){
    //REVERSING A NUMBER
    int n,reverse=0,lastdigit;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n){
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    cout<<reverse;
    //ARMSTRONG NUMBER
    int originalm,m,lastdigit1,sum=0;
    bool num=0;
    cout<<"Enter the number"<<endl;
    cin>>m;
    originalm=m;
    while(m){
        lastdigit1=m%10;
        sum=sum+(lastdigit1*lastdigit1*lastdigit1);
        m=m/10;
    }
    if(sum==originalm){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
    return 0;     
}