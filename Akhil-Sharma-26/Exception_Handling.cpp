#include<iostream>
using namespace std;
void show(const char* p){
    cout<<p;
}
int main(){
    const char *p="Hello World"; //By adding const keyword, we can remove the warning
    show(p);
}
