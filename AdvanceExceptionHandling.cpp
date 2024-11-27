#include<iostream>
using namespace std;

//nested try , multiple catch , throw

int division(int , int );

int main(){
    int a, b, c;
    cout << "best divide program"<<endl;
    cin >> a >>b;

    try{
        c = division(a,b);
        /*try{          //nested

        } 
        catch(){

        }*/
        cout << c;          //throw
    }

    catch(int e){
        cout << "trying to divide by zero. Error Code: " << e << endl;  
    }

    catch(float e){
        cout <<"trying to divide by zeor. Error Code: " << e << endl;
    }

    
    catch(...){
        cout << "handling all the rest errors" << endl;
    }

    return 0;
}

int division(int a , int b){
    if(b==0){
        throw float(1.1);
    }else{
        return (a/b);
    } 
}