#include<iostream>
using namespace std;

int main() {

    int score, pass;
    
    cout << "please enter your score! " << endl;
    cin >> score;

    pass = (score >= 40) ? 1 : 0;

    cout << "pass value: " << pass << endl;

    if(score >= 50){
        if(score >= 80){
            cout << "Congrats!" << endl;
        }
        else{
            cout << "you tried your best" << endl;
        }
    }
    else {
        if(score >=40){
            cout << "well atleast you passed" << endl;
        }
        else {
            cout << "better luck next time" << endl;
        }
    }
   
    return 0;
}