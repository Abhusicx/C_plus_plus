#include<iostream>
using namespace std;

class B;
class A{
    private:
    int gamma;
    public:
    int x,y;
    friend B;
};

class B{                //has a relationship
    public:
    A e;
    void checkingVal(){
        cout << "Derived class fn" << endl;
        e.x = 0;
        e.y = 1;
        e.gamma = 11;
        cout << e.x << " " << e.y << " " << e.gamma << endl;
    }
};

int main(){
    B obj;
    obj.checkingVal();
    return 0;
}
