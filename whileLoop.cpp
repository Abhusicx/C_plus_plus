#include<iostream>
using namespace std;

int main(){

    int n, i;
    long long int val;

    cout << "In this program we will find 2^n" << endl;
    cout << "Enter the value of exponent n" << endl;
    cin >> n;

    i = 0; val = 1;
    while(i<n){
        val *= 2;
        i++;
    }
        
    cout << "2 raised to the power of " << n << " is " << val << endl;
    return 0;
}