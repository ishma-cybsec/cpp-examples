//C++ allows the declaration and definition of classes. Instances of classes are Objects. In above declaration, class is a keyword. Access specifier may be public, private and protected, which decides scope and visiblity of data member functions declared in the class defintion.
//Topic: class definition including its members
//File: example-1.cpp
//Author: ishma-cybsec

#include <iostream>
using namespace std;

class ABC {
public:
    void getdata() {
        int data;
        cout << "Enter Number: ";
        cin >> data;
        cout << "The number entered is: " << data << endl;
    }
};

int main() {
    ABC obj;
    obj.getdata();
    return 0;
}
