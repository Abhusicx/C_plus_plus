#include<iostream>
using namespace std;

class Base { //interface class ; a class that only have pure virtual function
    public:
    virtual void outpt() = 0  ; //pure virtual function ; any class that have virtual function is abstract class
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



int main(){
    Derived d;
    Base *b = &d;
    b->outpt();
    return 0;
}
