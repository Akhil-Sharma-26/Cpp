#include<iostream>
using namespace std;
void show(int a){
    cout<<a;
}
void show(double a){
    cout<<a;
}
//Make you function gneral/generic
template <class T>
T sum(T a,T b){
    return a+b;
}
int main(){
    int r=sum <int>(5,6);
    cout<<r;
    double s=sum <double>(143.324234,3432.4);
    cout<<endl<<s;
}