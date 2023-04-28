#include<iostream>
using namespace std;
#include<fstream>
int main(){
    ofstream ob("File.md",ios::app);
        ob<<"#Hello World!";
        int r=ob.tellp();cout<<r<<endl;
        ob.seekp(4,ios::beg);
        ob<<"**Hello**";
}
// Important Questions:
// Different modes of opening a file
// difference between b/w binary and text file
// operation on binary file
// Seekp,seekg,tellp,tellg
// ios class structure, ios beg, end,
// Less chances of including OOPS in File handling