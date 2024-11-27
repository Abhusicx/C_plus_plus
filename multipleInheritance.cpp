#include <iostream>
using namespace std;

// Base class 1
class A {
    public:
        int a;
        A(){
            cout << "A class" << endl;
        }
};

// Base class 2
class B {
    public:
        int b;
        B(){
            cout << "B class" << endl;
        }
};

// Derived class that inherits from both A and B
class C : public A, public B {
    public:
        int c;
        C(){
            cout << "D class" << endl;
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
