#include <iostream>
using namespace std;

// Base class 1
class A {
    public:
        int a;
        A() {
            cout << "A class" << endl;
        }
};

// Base class 2
class B {
    public:
        int b;
        B() {
            cout << "B class" << endl;
        }
};

// Derived class from A and B (multiple inheritance)
class C : public A, public B {
    public:
        int c;
        C() {
            cout << "C class" << endl;
        }
};

// Further derived class from C (hierarchical inheritance)
class D : public C {
    public:
        int d;
        D() {
            cout << "D class" << endl;
        }
};

int main() {
    // Create an object of the derived class D
    D obj;
    
    // Set values for the members
    obj.a = 10;
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;
    
    // Print values
    cout << "a: " << obj.a << ", b: " << obj.b << ", c: " << obj.c << ", d: " << obj.d << endl;

    return 0;
}
