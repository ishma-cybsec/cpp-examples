//Objects are autonomous entites of the class; they are instances of the class and belong toa class. Traditionally, code and data have been kept apart but in o-o (object-oriented) programming, code and data are merged into a single indivisible thing 'an object'. Thus methods are normally invoked using objects.
//Title: Invoking class members (data and function) via instances (objects)
//File: examples-3.cpp
//Author: ishma-cybsec

#include <iostream>
using namespace std;

class ABC {
public:
    int i;

    void display() {
        cout << "\nInvoking member function through object" << endl;
    }
};

int main() {
    ABC obj;          // instance of the class
    obj.i = 5;
    cout << "Value of i: " << obj.i << endl;   // accessing data member
    obj.display();     // accessing member function
    return 0;
}
