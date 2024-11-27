#include <iostream>
using namespace std;

// Base class
class A {
    public:
        int a;
        A() {
            cout << "A class" << endl;
        }
};

// Derived class 1 from A
class B : public A {
    public:
        int b;
        B() {
            cout << "B class" << endl;
        }
};

// Derived class 2 from A
class C : public A {
    public:
        int c;
        C() {
            cout << "C class" << endl;
        }
};

int main() {
    // Create objects of both derived classes
    B obj1;
    C obj2;
    
    // Set values for both objects
    obj1.a = 10;
    obj1.b = 20;
    
    obj2.a = 30;
    obj2.c = 40;

    // Print values for obj1
    cout << "For object obj1 (class B): " << endl;
    cout << "a: " << obj1.a << ", b: " << obj1.b << endl;

    // Print values for obj2
    cout << "For object obj2 (class C): " << endl;
    cout << "a: " << obj2.a << ", c: " << obj2.c << endl;

    return 0;
}
