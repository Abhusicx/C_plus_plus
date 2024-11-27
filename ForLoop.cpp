#include<iostream>
using namespace std;

int main(){
    int n, i, val, sum = 0;
    float average;

    cout << "enter the value of n " << endl;
    cin >> n;

    for(i = 0; i<n; i++){
        cin >> val;
        sum += val;
    }
    average = (float)sum/n;

    cout << "the average is : " << average << endl;

    return 0;
}