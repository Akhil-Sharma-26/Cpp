#include<iostream>
using namespace std;

int main(){
    // Array--> An array is a collection of items which are of the similar type stored in contiguous memory locations.
    //Array Example:
    int marks[5] = {14,153,53,64,24};
    int mathMarks[5];
    mathMarks[0]=625;
    mathMarks[1]=4122;
    mathMarks[2]=4242;
    mathMarks[3]=24;
    mathMarks[4]=423;
    cout<<endl<<endl;
    // Counting starts from 0 in C++
    //We can output the value stored in an array in the following ways:
    //1--> Usual cout approach
    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    cout<<mathMarks[4]<<endl;

    // We can change the value in an array later on as we used to do with variables
    cout<<marks[0]<<endl; 
    cout<<marks[1]<<endl; 
    cout<<marks[2]<<endl; 
    cout<<marks[3]<<endl; 
    cout<<marks[4]<<endl; 

    cout<<endl;

    //2-- Using Loops
    int i,j,k=0;
    for ( i; i < 4; i++)
    {
        cout<<"The value of marks" <<i<<" is" <<mathMarks[i]<<endl; 
    }

    cout<<endl;

    while(j<4)
    {
        cout<<"The value of marks" <<j<<" is" <<marks[j]<<endl; 
        j++;
    }
    
    cout<<endl;

    do
    {
        cout<<"The value of marks" <<k<<" is" <<marks[k]<<endl; 
        k++;
    }while (k<4);
    
    cout<<endl;

    //***Pointers and Arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}