//write a program to find the roots of a quadratic equation implement exception handling to handle the case where a = 0;
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b, c, d;
    float x1, x2;
    cout << "Given the following formula for a quadratic equation" << "a*(x^2) + b*(x) = c = 0" << endl;
    cout << "enter the values of a , b, & c" << endl;

    try{
        cin >> a >> b >> c;
        if(a == 0) {
            throw 101;
        }
    }
    catch(int e){
        cout << "cannot proceed with calculating the roots..." << "Quadratic equation's quadratic part is missing" << endl;
        cout << "a cannot be zero. Error Code: " << e << endl;
        return 0;
    }

    d = (b*b) - (4*a*c);
    if(d==0){
        cout << "roots are real and equal" << endl;
        x1 = -b / (2.0*a);
        x2 = x1;
        cout << "the roots are " << x1 << " and " << x2 << endl;
    }
    else if(d>0){
        cout << "roots are real but unequal" << endl;
        x1 = (-b + sqrt(d))/(2.0*a);
        x2 = (-b - sqrt(d))/(2.0*a);
        cout << "roots are " << x1 << " and " << x2 << endl;
    } else {
        cout << "roots are real and equal " << endl;
    }

    return 0;
}