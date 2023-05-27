#include<iostream>
using namespace std;

//differnet Control structures in C++ are:
//1*Sequence Structure*
//--> Sequence structure refers to the sequence in which program execute instructions one after another.
//2*Selection Structure*
//-->Selection structure refers to the execution of instruction according to the selected condition, which can be either true or false.
//Examples: if else and switch


int main(){

    //*********if else-if else*********
    int age;
    cout<<"enter your age:"<<endl;
    cin>>age;
    if(age>18){
        cout<<"You are eligible to vote.";
    }
    else if(age<18){
        cout<<"You are not eligible for voting.";
    }
    else{
        cout<<"Hello World.";
    }
    cout<<endl;
    switch (age)
    {
    case 18:
        cout<<"Welcome to voting world"<<endl;
        break; //The use of break is very neccessary as it stops the switch at the time it becomes True and jumps out of the switch statement.

    case 20:
        cout<<"Hello world";
        break;
    default:
        cout<<"lolz";
        break;
    }
    return 0;

}