#include<iostream>
using namespace std;
 int main(){
    /* *****LOOPS in C++**********
    There are three types of loops in C++:
        1. For Loop
        2. While Loop
        3. Do-While Loop
    */    
    
    /* *******FOR Loop********
    -->Syntax:
    for(initialization; condition; updation){
        Loop body(C++ Code);
    }
    */
    for ( int i = 0; i<10; i++){
        cout<<i<<endl;
    }
    cout<<endl<<endl;
    // cout<<endl<<endl;

    /* ******WHILE loop******
    -->Syntax:
    starting point
    while(condition)
    {
        C++ Statement;
        increment/decrement;
    }
    */
    int y=1;
    while(y<=10){
        cout<<y<<endl;
        y++;
    }

    cout<<endl<<endl;

    /* *******DO-WHILE loop****** 
    Syntax-->
    starting point;
    do{
        C++ Satement;
        increment/decrement;
    }
    while(condition);
    */

    int x=2;
    do
    {
        cout<<x<<endl;
        x++;
    } while (x<10);




    //Infinite loops are also possible but it is advised to avoid them as they put a lot of pressure in the memory and this may result in the breakdown of programs and can hang your computer overall. It also put excessive load on the computer processor.
    //C++ gives user the powerm to use as much memory as possible and in any way. But with great power comes great responsibilities.

    
    

    
    
    return 0;
 }