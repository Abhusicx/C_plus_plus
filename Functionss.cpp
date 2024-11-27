#include<iostream>
using namespace std;

void swap_m(int &x,int &y){
    int temp;
    temp = y;
    y = x;
    x = temp;
}

int main(){

    int a, b;
    cout << "enter the values of a & b" << endl;
    cin >> a >> b;
    swap_m(a,b);
    cout << "Outside function A: " << a << endl << "B: " << b << endl;

    return 0;
}

