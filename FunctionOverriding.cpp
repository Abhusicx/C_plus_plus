#include<iostream>
using namespace std;

class Base {
    public:
    int a, b;
    Base(){
        a = 0 ; b = 0;
    }

    void setValues(int x, int y){
        a = x;
        b = y;
        cout << "base class function" << endl;
    }
};

class Derived: public Base{
    public:
    int c,d;
    Derived(){
        c = 0; d = 0;
    }

    void setValues(int x, int y){
        c = x;
        d = y;
        cout << "derived class function" <<endl;
    }

    void printVal(void){
        cout << "a is  " << a << " b is " << b << " c is " << c << " d is " << d << endl;
    }
};

int main(){
    Base *d;
    Derived e;
    d = &e;
    cout << d->a << endl;
    d->setValues(2,3);
    return 0;
}

