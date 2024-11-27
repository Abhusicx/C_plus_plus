#include<iostream>
using namespace std;
class ComplexNumbers {
private:
    int real;
    int imag;
public:
    ComplexNumbers(void) : real(0), imag(0) {}
    ComplexNumbers(int x, int y) : real(x), imag(y) {}
    ComplexNumbers(const ComplexNumbers& z) : real(z.real), imag(z.imag) {}
    void setValues(int, int);
    bool isReal(void) const;  // Marked as const since it doesn't modify the object
    ComplexNumbers findProduct(const ComplexNumbers&) const; // Make this method const
    inline void display(void) const;  // Marked as const since it doesn't modify the object
    ComplexNumbers operator +(const ComplexNumbers&) const;
    ComplexNumbers operator *(const ComplexNumbers&) const;
    friend ComplexNumbers operator -(const ComplexNumbers&, const ComplexNumbers&); // Friend function
};
int main() {
    ComplexNumbers a, b, c;
    a.setValues(1, 2);
    b.setValues(3, 4);
    c = a + b;
    c.display();
    c = a.findProduct(b); // Using findProduct for multiplication
    c.display();
    c = a * b; // Using operator* for multiplication
    c.display();
    c = a - b; // Using operator- for subtraction
    c.display();
    return 0;
}
void ComplexNumbers::display(void) const {
    cout << real << " + " << imag << "i" << endl;
}
void ComplexNumbers::setValues(int x, int y) {
    real = x;
    imag = y;
}
bool ComplexNumbers::isReal(void) const {
    return imag == 0; // Using equality operator for comparison
}
ComplexNumbers ComplexNumbers::findProduct(const ComplexNumbers& x) const {
    ComplexNumbers z;
    z.real = real * x.real - imag * x.imag;
    z.imag = imag * x.real + real * x.imag;
    return z; // Correctly return the product
}
ComplexNumbers ComplexNumbers::operator+(const ComplexNumbers& k) const {
    ComplexNumbers c;
    c.real = real + k.real;
    c.imag = imag + k.imag;
    return c;
}
ComplexNumbers ComplexNumbers::operator*(const ComplexNumbers& x) const {
    ComplexNumbers z;
    z.real = real * x.real - imag * x.imag;
    z.imag = imag * x.real + real * x.imag;
    return z; // Correctly return the product
}
ComplexNumbers operator -(const ComplexNumbers& x, const ComplexNumbers& y) {
    ComplexNumbers z;
    z.real = x.real - y.real;
    z.imag = x.imag - y.imag;
    return z; // Correctly return the difference
}
