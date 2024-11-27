//possible functions in C++ classes
#include<iostream>
using namespace std;

class ComplexNumbers{   //constructor , destructor, mutators, accessors, enquiry, facilitators
    private:
    int real;
    int imag;

    public:
    ComplexNumbers(void){
        real = 0;
        imag = 0;
    }

    ComplexNumbers(int x, int y ) {
        real = x;
        imag = y;
    }

    ComplexNumbers(const ComplexNumbers& z){
        real = z.real;
        imag = z.imag;
    }

    void setValues(int,int);
    bool isReal(void);
    ComplexNumbers findProduct(ComplexNumbers);

    inline void display(void);
};


int main () {
    ComplexNumbers a;
    a.setValues(1,2);
    ComplexNumbers *b;
    b = &a;
    b->display();
    

    return 0;
}

void ComplexNumbers :: display(void){
    cout << real << " + " << imag << "i"<< endl;
}

void ComplexNumbers :: setValues(int x, int y){
    real = x;
    imag = y;
}

bool ComplexNumbers :: isReal(void){
    if(imag = 0) {
        return true;
    } else {
        return false;
    }
}

ComplexNumbers ComplexNumbers :: findProduct(ComplexNumbers x){
    ComplexNumbers z;
    z.real = real*x.real - imag*x.imag;
    z.imag = imag*x.real + real*x.imag;
    return x;
}
