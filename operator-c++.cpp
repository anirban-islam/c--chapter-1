#include<iostream>
#include<string>
using namespace std;

int main(){
//operator in C++
//Arithmetic operators
                    //[+ - addition ]
                    //[ - - subtraction ]
                    //[* - Multiplication]
                    //[ /- Division ]
                    //[ % - Modulus ]
                    //[++ -Increment]
                    //[-- -Decrement]

//Assignment operators - we use the assignment operator (=) to assign the value

//Comparison operators
                    //[== -Equal to]
                    //[!= - Not equal]
                    //[ > -Greater than]
                    //[< -Less than]
                    //[>= -Greater than or equal to]
                    //[<= -Less than or equal to]

//Logical operators
                    //[&& - Logical and]
                    //[|| - Logical or]
                    //[!  -Logical not]

//Bitwise operators
                    //Bitwise operators in C++ work directly on the binary (bit-level) representation of numbers.
                    //They are mostly used for low-level programming, such as working with hardware, optimizing memory, encryption, and flags.



// Example For Arithmetic operators :

// declaration
int a;
int b;

float c;
float d;

string firstName;
string lastName;

// user input
cout<< "Enter Integer Value A = : ";
cin>>a;
cout<<"Enter The Integer Value B : ";
cin>>b;
cout<< "Enter Float Value C = : ";
cin>>c;
cout<<"Enter Float  Value D : ";
cin>>d;
cin.ignore(); // For Vanish Enter
cout<<"Enter The First Name : ";
getline(cin , firstName);
cin.ignore();
cout<<"Enter The Last Name : ";
getline(cin , lastName);



//Addition Operator
cout<<"\t Addition Operator Work"<<endl;
cout<<"Addition between Two Integers "<<"A+B = "<<a+b<<endl;
cout<<"Addition between Two Float "<<"C+D = "<<c+d<<endl;
cout<<"Addition between Two String "<<"First Name + Last Name = "<<firstName + lastName <<endl; // string work only addition operator to concatenate two string

//subtraction Operator
cout<<"\t subtraction Operator Work"<<endl;
cout<<"subtraction between Two Integers"<<"A-B = "<<a-b<<endl;
cout<<"subtraction between Two Float"<<"C-D = "<<c-d<<endl;

//Multiplication Operator
cout<<"\t Multiplication Operator Work"<<endl;
cout<<"Multiplication between Two Integers "<<"A*B = "<<a*b<<endl;
cout<<"Multiplication between Two Float "<<"C*D = "<<c*d<<endl;

//Division Operator
cout<<"\t Division Operator Work"<<endl;
cout<<"Division between Two Integers "<<"A/B = "<<a/b<<endl;
cout<<"Division between Two Float "<<"C/D = "<<c/d<<endl;

//Modulus Operator
cout<<"\t Modulus Operator Work "<<endl;
cout<<"Modulus between Two Integers "<<"A%B = "<<a%b<<endl;
//cout<<"Modulus between Two Float"<<"C%D = "<<c%d; Tow float can't be performed Modulus

return 0;
}
