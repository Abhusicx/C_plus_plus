#include <iostream>
using namespace std;

// Base class
class A {
    public:
        int a;
        A(){
            cout << "A class" << endl;
        }
};

// Derived class from A
class B : public A {
    public:
        int b;
        B(){
            cout << "B class" << endl;
        }
};

// Further derived class from B
class C : public B {
    public:
        int c;
        C(){
            cout << "C class" << endl;
        }
};

int main() {
    C obj;
    obj.a = 10;
    obj.b = 20;
    obj.c = 30;
    
    cout << "a: " << obj.a << ", b: " << obj.b << ", c: " << obj.c << endl;

    return 0;
}
