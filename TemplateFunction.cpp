#include<iostream>
using namespace std;

template<class T, class S>
T add(T a, S b){            //Template function
    return a+b;
}

int main(){
    int a = 2, b= 3, c = 12;
    cout << add<int,int>(a,b) << endl;
    cout << add<float,int>(1.01,5);

    return 0;
}