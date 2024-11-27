#include<iostream>
using namespace std;

int main(){
    
    int height , base;
    float area;

    cout << "please enter height of triangle " << endl;
    cin >> height;

    cout <<"please enter base of triangle " << endl;
    cin >> base;

    area = (float)height * (float)base / 2;                     //typecasting
    cout << "area of triange is " << area << endl;


    return 0;
}