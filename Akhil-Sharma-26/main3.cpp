//#include <iostream>
//using namespace std;
//// Q6 (i): Implimented in previous Question
//// Q6: (ii): Calling Private Function using public Function
//class Exm{
//    int A;
//    void GetA(){
//        cout<<"Enter A: ";
//        cin>>A;
//    }
//public:
//    void showA(){
//        GetA();
//        cout<<A;
//    }
//};
//int main(){
//    Exm ob1{};
//    ob1.showA();
//}
// Q7: Addition of Complex Numbers
#include <iostream>
using namespace std;
class Complex{
    int Real,Img;
public:
    void Set(){
        cout<<"Enter the Complext number: ";
        cin>>Real>>Img;
    }
    void display(){
        cout<<"The Complex number that you just entered is: "<<Real<<"+ i"<<Img<<endl;
    }
    void sum(Complex,Complex);
};
void Complex::sum(Complex cmp, Complex cmp3) {
    cmp.Real=cmp.Real+cmp3.Real;
    cmp.Img=cmp.Img+cmp3.Img;
    cout<<"Sum of 2 complex Numbers is: "<<cmp.Real<<"+ i"<<cmp.Img;
}
int main(){
    Complex cmp1,cmp2;
    cmp1.Set();
    cmp2.Set();
    cmp1.display();
    cmp2.display();
    cmp1.sum(cmp1,cmp2);
}
// Find some other ways to solve this problem
// Q8: Implementation of Namespace:
