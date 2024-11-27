#include<iostream>
using namespace std;

//try , catch , throw
int main(){
    int a, b, c;
    cout << "best divide program"<<endl;
    cin >> a >>b;

    try{
        if(b==0){
            throw 1;
        }
        c = a/b;
        cout << c;          //throw
    }

    catch(int e){
        cout << "trying to divide by zero. Error Code: " << e << endl;  
    }
    return 0;
}