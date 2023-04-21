// Q4: Done using Structure
//#include <iostream>
//using namespace std;
//struct Student{
//    string name;
//    int RollNo;
//    string Degree;
//    char Hostel;
//    float Current_CG;
//    void addDetail();
//    void updateDetails();
//    void updateCGPA();
//    void updateHostel();
//    void displayDetails() const;
//};
//void Student::addDetail() {
//    cout<<"Enter your First name: ";
//    cin>>name;
//    cout<<endl<<"Enter your Roll number: ";
//    cin>>RollNo;
//    cout<<"Enter the degree you are currently pursuing: ";
//    cin>>Degree;
//    cout<<"Enter the name of hostel you are currently living in: ";
//    cin>>Hostel;
//    cout<<"Enter your current CGPA: ";
//    cin>>Current_CG;
//}
//void Student::updateCGPA() {
//    cout<<"Enter your New CG: ";
//    cin>>Current_CG;
//}
//void Student::updateDetails() {
//    cout<<"Enter your new Name: ";
//    cin>>name;
//    cout<<"Enter your new Roll number: ";
//    cin>>RollNo;
//}
//void Student::updateHostel() {
//    cout<<"Enter your new Hostel: ";
//    cin>>Hostel;
//}
//void Student::displayDetails() const {
//    cout<<"Student Name: "<<name<<endl;
//    cout<<"Roll number: "<<RollNo<<endl;
//    cout<<"Degree: "<<Degree<<endl;
//    cout<<"Hostel: "<<Hostel<<endl;
//    cout<<"Current CG: "<<Current_CG<<endl;
//}
//int main(){
//    struct Student Raghav,Sumit;
//    Raghav.addDetail();
//    Raghav.displayDetails();
//    Raghav.updateDetails();
//    Raghav.updateHostel();
//    Raghav.updateCGPA();
//    Raghav.displayDetails();
//    return 0;
//}
// Q5: Using Class
#include <iostream>
using namespace std;
class Student{
    string name;
    int RollNo;
    string Degree;
    char Hostel;
    float Current_CG;
public:
    void addDetail();
    void updateDetails();
    void updateCGPA();
    void updateHostel();
    void displayDetails() const;
};
void Student::addDetail() {
    cout<<"Enter your First name: ";
    cin>>name;
    cout<<endl<<"Enter your Roll number: ";
    cin>>RollNo;
    cout<<"Enter the degree you are currently pursuing: ";
    cin>>Degree;
    cout<<"Enter the name of hostel you are currently living in: ";
    cin>>Hostel;
    cout<<"Enter your current CGPA: ";
    cin>>Current_CG;
}
void Student::updateCGPA() {
    cout<<"Enter your New CG: ";
    cin>>Current_CG;
}
void Student::updateDetails() {
    cout<<"Enter your new Name: ";
    cin>>name;
    cout<<"Enter your new Roll number: ";
    cin>>RollNo;
}
void Student::updateHostel() {
    cout<<"Enter your new Hostel: ";
    cin>>Hostel;
}
void Student::displayDetails() const {
    cout<<"Student Name: "<<name<<endl;
    cout<<"Roll number: "<<RollNo<<endl;
    cout<<"Degree: "<<Degree<<endl;
    cout<<"Hostel: "<<Hostel<<endl;
    cout<<"Current CG: "<<Current_CG<<endl;
}
int main() {
    Student Raghav, Sumit;
    Raghav.addDetail();
    Raghav.displayDetails();
    Raghav.updateDetails();
    Raghav.updateHostel();
    Raghav.updateCGPA();
    Raghav.displayDetails();
    return 0;
}