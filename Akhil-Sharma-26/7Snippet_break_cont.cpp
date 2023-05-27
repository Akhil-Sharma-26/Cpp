#include<iostream>
using namespace std;

int main(){
    int i;
    for ( i = 0; i < 10; i++)
    {
        if (i==3)
        {
            break; //This command will end the list when value becomes 3
        }
        
        cout<<i<<endl;
    }
    cout<<endl<<endl<<endl;
    int r;
    for ( r = 0; r<15; r++)
    {
        if (r==10)
        {
            continue; // This command will print whole list but skip the 10
        }
        cout<<r<<endl;
        
    }
    

    
    
    return 0;
}