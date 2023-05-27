#include<iostream>
using namespace std;
int main(){
    // **** NORMAL RECTANGLE STAR PATTERN ****
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){        //This is for one row
            cout<<"*";
        }
        cout<<endl;                     //This is for the columns
    }
    cout<<endl<<endl;
    // **** HOLLOW RECTANGLE PATTERN ****
    for(int a=1;a<=row;a++){
        for(int b=1;b<=col;b++){
            if(a==row || a==1 || b==1 || b==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    // **** INVERTED HALF PYRAMID ****
    int n;
    cin>>n;
    n++;
    while(--n){
        for(int c=n;c>=1;c--){
            cout<<"*";
        }
        cout<<endl;
    }
    // for(int i=n;i>=1;i--){    // Same pattern with for loop
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl; 
    // }
    cout<<endl<<endl;
    // **** HALF PYRAMID AFTER 180deg ROTATION ****
    int m;
    cin>>m; 
    for(int d=1;d<=m;d++){
        for(int e=1;e<=m;e++){
            if(e+d<=n){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    };
    // **** HALF PYRAMID USING NUMBERS DECREASING****
    int o;
    cin>>o;
    o++;
    while(o--){
        for(int f=1;f<=o;f++){
            cout<<f;
    }
        cout<<endl;
    }
    // **** HALF PYRAMID USING NUMBERS INCREASING ****
    int p;
    cin>>p;
    // p--;
    // while(p++){        // NOT WORKING 
    //     for(int g=1;g<=p;g++){
    //         cout<<g;
    //     }
    //     cout<<endl;
    // }
    for(int g=1;g<=p;g++){
        for(int h=1;h<=g;h++){
            cout<<g;
        }
        cout<<endl;
    }
    cout<<endl;
    // **** FLOYD's TRIANGLE ****
    p++;
    int count=1;
    // while(p--){                                        ** //NOT WORKING
    //     for(int num=1;num<=p;num++){     
    //         cout<<count;
    //         count++;
    //     }
    //     cout<<endl;
    // }
    for(int num=1;num<=p;num++){
        for(int num1=1;num1<=num;num1++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    // **** BUTTERFLY PATTERN ****
    // NEEDS REVISION
    for(int num2=1;num2<=p;num2++){
        for(int num3=1;num3<=num2;num3++){
            cout<<"*";
        }
        int space=2*p - 2*num2;
        for(int num3=1;num3<=space;num3++){
            cout<<" ";
        }
        for(int num3=1;num3<=num2;num3++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int num2=p;num2>=1;num2--){
        for(int num3=1;num3<=num2;num3++){
            cout<<"*";
        }
        int space=2*p - 2*num2;
        for(int num3=1;num3<=space;num3++){
            cout<<" ";
        }
        for(int num3=1;num3<=num2;num3++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;     
}