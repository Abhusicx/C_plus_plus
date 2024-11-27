#include<iostream>
using namespace std;

class Parent{
    protected:
        int x;
    public:

        Parent(){
            x = 0;
            cout << "parent default constructor called " << endl;
        }

        Parent (int i) {
            x = i;
            cout << "parent parametrized constructor called " << endl;
        }

};
class Child : private Parent{       //public , private , protected
    private:
        int m;
    public:

    Child(){
        m = 0;
        cout << "child default constructor called " << endl;
    }

    Child(int a , int b): Parent(b){
        m = a;
        cout << "child parametrized constructor called " << endl;
    }

    void printVal(void){
        cout << "m: " << m << " & x: " << Parent::x << endl;
    }
};

/*
this is containership
class A{
    private:
    int wd;
    public:
    int a;
};
class B {   //has-a relationship
    public : 
    int b;
    A obj;
    obj.a;
    obj.wd;         //this cant be accessed;
}
class B : public A {    //is-a relationship
    public :
    int b;
}
*/

int main(){
    Child b(2,1);
    b.printVal();

    return 0;
}