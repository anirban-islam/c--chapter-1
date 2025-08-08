#include<iostream>
#include <string>
using namespace std;

int main(){
//Declaration Variable
string name;
float GPA;
int ID;
bool isStudent = true;

// Input variable value from user
cout<<"Student Id : ";
cin>>ID;
cout<<"Enter Name : ";
cin.ignore();  //.ignore() Clears the leftover newline
getline (cin, name); // getline() for Accept White Space
cout<<"Enter You're GPA : ";
cin>>GPA;



// Print The user input variable value
cout<<endl<<endl<<endl<<"User Input Variable Print"<<endl;
cout<<"Name : "<<name<<endl;
cout<<"ID : "<<ID<<endl;
cout<<"GPA : "<<GPA<<endl;
cout<<"Student Status : "<<isStudent<<endl;

return 0;
}
