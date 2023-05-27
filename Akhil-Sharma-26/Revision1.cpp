#include<iostream>
using namespace std;

int main(){
    char Grade ;
    cin>>Grade;
    switch (Grade)
    {
    case 'A':
        cout<<"Super"<<endl;
        break;
    case 'b':
        cout<<"Very Good"<<endl;
        break;        
    case 'v':
        cout<<"Fair"<<endl;
        break;
    case 'd':
        cout<<"Äbsent"<<endl;
        break;
    case 'e':
        cout<<"Fail";
        break;                
    default:
        cout<<"HEllo";
        break;
    }
    


    return 0;
}