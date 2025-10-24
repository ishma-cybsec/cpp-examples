//A class in C++ has a group of data and associated functions called data members and member functions, which are given, one of the success modifiers, namelypublic and protected.
//PUBLIC ACCESS MODIFIER: All data members and memeber functions using public access modifiers (i.e. those are defined in the public section of the class) are acessible by function in a program.
//PRIVATE ACCESS MODIFIER: If don't secify, any access modifier to the data memebers or member functions of the class, they are by default private. These are hidden from outside world and they are normally used to implement data hiding concept of object oriented programming. 
//PROTECTED ACCESS MODIFIER: These can only be used by member functions and friend of a class can be used by member functions and friends of a class as well as derived class member function. They are similar to private members since they can't be accessed directly by non-member functions, but can be derived by ones.
//Title: A program using access modifiers to display obeject details.
//File: example-2.cpp
//Author: ishma-cybsec

// Title: A program using access modifiers to display object details.
// File: example-2.cpp
// Author: ishma-cybsec

#include <iostream>
using namespace std;

class ABC {
private:
    int number;   // private member
protected:
    int data;     // protected member
public:
    void getdata() {
        cout << "Enter first number: ";
        cin >> number;
        cout << "Enter second number: ";
        cin >> data;
    }

    void putdata() {
        cout << "\n--- Displaying Object Details ---\n";
        cout << "First number (private): " << number << endl;
        cout << "Second number (protected): " << data << endl;
    }
};

int main() {
    ABC obj;
    // obj.number = 10; // cannot access private
    obj.getdata();
    obj.putdata();

    return 0;
}
