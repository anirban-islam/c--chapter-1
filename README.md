
## Authors

- [Anirban Islam Emon ](https://dev-anirban.me/)


## 🔗 Links

[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://dev-anirban.me/)

[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/anirban-islam/)

[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://x.com/Anirban_Islam_)



# Day One CPP 🎈
 # indruction C++ First Program 

        1. #include<iostream> //Header file that include library

        2. using namespace std; // That make code clean and sort - cin:std---->cin>>

        //Main Function Code Run from Main function

        3. int main()
        {

        4. cout<<"Hello World"; // Just Print or output an string
        5. return 0;
        }


 # Output In C++

        1. #include<iostream>
        2. using namespace std;
        3. int main ()
        {

        //Single output
        4.  cout<<"Anirban Islam Emon";

        // multiple output
        5. cout<<"Anirban Islam Emon" << " CSE Student" << "Varendra University ";

        //multiple Output With Line Break using "endl"
        6.cout<<endl<< "Name : Anirban Islam Emon" << endl << "CSE Student" <<endl <<"Varendra University";

        7. return 0 ;
        }



 # Data Type In C++
        1.#include<iostream>
        2.using namespace std;
        3.int main(){

        //boolean 1 byte Stores true or false values
        //char	1 byte	Stores a single character/letter/number, or ASCII values
        //int	2 or 4 bytes Stores whole numbers, without decimals
        //float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
        //double 8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
        // string The string type is used to store a sequence of characters (text).



        //int data type
        4.int number = 5;
        5.cout<<"Integer value is : "<<number<<endl;

        //Float Data type
        6.float number1 = 4.5 ;
        7.cout<<"Float Value Is : "<<number1<<endl;


        //Double Data type
        8.double number2 = 4.55;
        9.cout<<"Double value is : " << number2<<endl;

        //Character Data type
        10.char letter = 'a';
        11.cout<< "My charater value is : "<<letter<<endl;

        12.// Boolean Data Type
        13.bool isOpen =true;
        14.cout<< "Boolean Value is : "<<isOpen<<endl;

        // String data type
        15.string myName = "Anirban Islam Emon ";
        16.cout<<"String Value is : " <<myName;

        17.return 0;
        }

# Variable In C++
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

# Input In C++

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

# Operator In C++
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



