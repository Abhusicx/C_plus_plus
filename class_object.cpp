#include<iostream>
using namespace std;

class Testing {
    private:
        int a;
        float b;
    public:
        int c;
        float d;
    Testing(){
        a = 0; b = 0; c = 0; d = 0;
    }
    void print_values(void){
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
        cout << "d: " << d << endl;
    }
};

int main(){
    Testing x, y;
    x.print_values();
    x.print_values();
    return 0;
}