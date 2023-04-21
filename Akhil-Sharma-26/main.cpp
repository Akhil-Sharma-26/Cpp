#include <iostream>
using namespace std;
int main() {
    // Q1: Use of cout and some control characters;
    std::cout << "Hello, World!" << std::endl;
    std::cout<< "This is the output and I am also using \t tab and \n new line command and \r Hiii, I am at the start"<<endl;
    // Q2: Conversion between Celsius and Fahrenheit
    float Celsius,Fahrenheit;
    cout<<"Enter the value of temperature in celsius: ";
    cin>>Celsius;
    Fahrenheit=((float)(9*Celsius)/5)+32;
    cout<<"The temperature in Fahrenheit is: "<<Fahrenheit;
    // Q3: Use of loops
    for(int i=0;i<5;i++){
        cout<<i<<endl;
    }
    cout<<endl<<endl;
    int i=0;
    while(i<5){
        cout<<i<<endl;
        i++;
    }
    cout<<endl<<endl;
    i=0;
    do{
        cout<<i<<endl;
        i++;
    }while(i<5);
    return 0;
}
