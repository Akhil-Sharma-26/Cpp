#include<iostream>
using namespace std;
    int sum(int a, int b){
        cout<<"Using function with 2 arguments"<<endl;
        return a+b;
    }
    int sum(int a, int b, int c){
        cout<<"Using function with 3 argumetns"<<endl;
        return a+b+c;
    }
    // Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}
// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}
// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}
int main(){
    cout<<"The sum of a and b and c is: "<<sum(23,4,13)<<endl;
    cout<<"The sum of a and b is: "<<sum(23,4)<<endl; //Cpp is smart enough to use the function that meets its requirements.
    cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
    //This thing tht we did above is called function overloading. And C++ can understand what function to use according to the number of argumnets given.
    return 0;     
}