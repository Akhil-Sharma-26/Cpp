#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int a[]={23,4,25,3,5,23,3,2,5,3};
    fstream fs;
    fs.open("myfile.txt",ios::binary|ios::out);
    fs.write((char*)&a,sizeof(a));
    fs.close();
    for(int i=0;i<7;i++){
        a[i]=0;
    }
    fs.open("myfile.txt",ios::in|ios::binary);
    fs.read((char *)&a,sizeof(a));
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    } 
    fs.close();
}