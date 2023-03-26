// *******************POLYMORPHISM********************** //
// -- One name and multiple forms
// -- like Function Overloading, Operator Overloading and virtual function etc.
// ! It is of two Tyes:
    // ? 1. Compile time polymorphism (Early Binding/ Static Binding)
        // Konsa vala Funtion call hoga vo compile time pe hi select ho jata h. (Object gets bounded to the function/operator at the time of compile) Example: Function overloading and operator overloading 
    // ? 2. Runtime Polymorphism:
        // It is achieved by virtual function. Compiler defers the decision of linking the function to the run time. Konsa function run(/bind) hoga uska decision runTime pe hota h according to the type of pointer used(kind of). 
#include<iostream>
using namespace std;
class A{

};