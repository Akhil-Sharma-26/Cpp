#include<iostream>
using namespace std;
void pirntArray(int arr[],int size){ // Size of array is also sent here so that we can iterate the loop.
    cout<<"Printing the Array: ";
    for(int i=0; i<size;i++){
        cout<<arr[1]<<" ";
    }
    cout<<"Printing done";
}
int main(){
    /* Array:
        1) Similar types of item.
        2) Value in array are stored in contigous(continuous) location
        3) We can accese any data from array using index.
        4) used to store mutiple values in single variable.
    */
    /* Index:
        goes from 0 to n-1;
    */
    // Initialisation types:
        int hello[20]={6};
        int nu[4]={13,42,1,2};
        int x[100]={0}; // Initialising all locations with zero.
        int y[10]={1}; // Initialisng all locations with 1. Doesnot work using this.
        // HomeWork: entire array ko kisi bhi value se initialise kaise kre?
    // hello[1]=4; Using for loop after this will printf garbage value in empty indexes
    // Accessing an element:
    cout<<hello[0]<<endl;
    int n=20;
    for(int i=0;i<n;i++){
        cout<<hello[i]<< " ";    //All the elements which have not been assigned will become zero automatically.
    }
    pirntArray(y,10); // Function including array
    // To find the size of array:
    int sizeofx= sizeof(x)/sizeof(int);
    cout<<sizeofx<<endl;
    // Character Array:
    char ch[3]={'a','f','s'};
    for(int i=0;i<3;i++){
        cout<<ch[i]<< " ";    
    }
    /* Array can be of different datatypes: */ double aa[34]; float gg[32]; 
    int a=934;
    cout<<a;
    
    return 0;     
}