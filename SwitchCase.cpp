#include<iostream>
using namespace std;

int main(){
    int gpa;

    cout << "Please enter your score!" << endl;

    cin >> gpa;

    switch(gpa){
        case 0:
            cout << "terrible" << endl;
            break;
        case 1:
            cout << "satisfactory" << endl;
            break;
        case 2:
            cout << "average" << endl;
            break;
        case 3: 
            cout << "good" << endl;
            break;
        case 4:
            cout << "exellent" << endl;
            break;
        default:
            cout << "invalid gpa entered" << endl;
            break;
    }

    return 0;
}