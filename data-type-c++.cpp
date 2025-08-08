#include<iostream>
using namespace std;

int main(){
//boolean	1 byte	Stores true or false values
//char	1 byte	Stores a single character/letter/number, or ASCII values
//int	2 or 4 bytes	Stores whole numbers, without decimals
//float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
//double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
// string The string type is used to store a sequence of characters (text).



//int data type
int number = 5;
cout<<"Integer value is : "<<number<<endl;

//Float Data type
float number1 = 4.5 ;
cout<<"Float Value Is : "<<number1<<endl;


//Double Data type
double number2 = 4.55;
cout<<"Double value is : " << number2<<endl;

//Character Data type
char letter = 'a';
cout<< "My charater value is : "<<letter<<endl;

// Boolean Data Type
bool isOpen =true;
cout<< "Boolean Value is : "<<isOpen<<endl;

// String data type
string myName = "Anirban Islam Emon ";
cout<<"String Value is : " <<myName;

 return 0;
}
