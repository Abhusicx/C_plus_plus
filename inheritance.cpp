#include<iostream>
using namespace std;

class Parent{
    private:
        int x;
    public:
        int y,z;
};
class Child : protected Parent{       //public , private , protected
    private:
        int m;
    protected:
        int wildcard;
    public:
        int n;

    void setValue(int a, int b, int c, int d, int e){
        y = a;
        z = b;
        m = c;
        n = d;
        wildcard = e;
    }

    void printVal(void){
        cout << y  << " " << z << " " << m << " " << n << " " << wildcard << endl;;
    }
};

int main(){
    Child b;
    b.setValue(1,2,3,4,5);
    b.printVal();
    return 0;
}