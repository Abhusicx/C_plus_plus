#include<iostream>
using namespace std;

int main(){

    int i , n;
    

    cout << "please enter size of the array : " << endl;
    cin >> n;

    int scores[n];
    
    cout << "Enter values for the array: " << endl;
    for(i=0; i<n; i++){
        cin >> scores[i];
    }

    cout << "Printing array: " << endl;
    for(i=0; i<n; i++){
        scores[i] *= 2;
        cout << scores[i] << "\t";
    }

    return 0;
}
