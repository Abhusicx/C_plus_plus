#include <iostream>
using namespace std;

class A {  // Outer class
public:
    class B {  // Inner class
    public:
        int e, f;

        void testTwo() {
            // Accessing the outer class's static member `z`
            cout << e << " " << f << " " << A::z << endl;
        }
    };

    int a, b;
    static int z;  // Static member variable
    B c;  // Instances of the inner class

};

// Definition of the static member variable
int A::z = 42;  // Initialize `z` to some value, e.g., 42

int main() {
    A outer;
    A::B inner;  // Create an instance of the inner class

    inner.e = 10;
    inner.f = 20;

    inner.testTwo();  // Call the method that uses static member

    return 0;
}
