#include <iostream>
using namespace std;
class A {
public:
    A() {
        cout << "A Base class constructor is called " << endl;
    }
    virtual~A() {
        cout << "A Base class destructor is called " << endl;
    }
};
class B : public A {  // Correct inheritance syntax
public:
    B() {
        cout << "B derived class constructor is called " << endl;
    }
    ~B() {
        cout << "B derived class destructor is called " << endl;
    }
};
int main() {
    A *a;
    B b;
    a = &b;
    return 0;
}
