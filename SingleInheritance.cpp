#include<iostream>
using namespace std;

class A {
    public:
        int a;
};

class B : public A{
    public:
        int b;
};

int main(){
    B c;
    c.a = 10;
    c.b = 11;
    cout << c.a << " " << c.b << endl;

    return 0;
}