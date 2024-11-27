#include<iostream>
using namespace std;

class Base { //abstract class
    public:

    /*virtual void outpt(){
        cout << "Base class fn" << endl;
    }*/

    virtual void outpt() = 0;       //pure virtual function
};

class Derived: public Base{
    public:
    int c,d;
    Derived(){
        c = 0; d = 0;
    }

    void outpt(){
        cout << "derived class fn" << endl;
    }
};

class NewClass : public Base{
    public:
    void outpt(){
        cout << "new class fn" << endl;
    }
};

int main(){
    Derived d;
    Base *b = &d;
    b->outpt();
    NewClass x;
    b = &x;
    b->outpt();
    return 0;
}

