#include<iostream>
using namespace std;

int main(){
    //DO WHILE
    double x, y=1 ;
    cout<<"The number you want the table for: ";
    cin>>x;
    float z= x;
    do{
        cout<<x<<"*"<<y<< " Equals to " <<z<<endl;
        y++;
        z=y*x;
    }while(y<=10);

    cout<<endl<<endl;

    //FOR
    int a,b,c;
    cout<<"The number you want the table of: "<<endl;
    cin>>a;
    for ( a,b=1,c=a; b <=1000; b++, c=b*a)
    
    {
        
        cout<<a<<"*"<<b<<" = " <<c<< endl;
    }

    cout<<endl<<endl;

    //WHILE
    int i, j=1;
    cout<<"The number you want the table of: "<<endl;
    cin>>i;
    int k=i;
    while(j<=1000)
    {
        cout<<i<<"*"<<j<<" Equals to " <<k<< endl;
        j++;
        k=i*j;

    }
    

    return 0;
}