#include<iostream>
using namespace std;

int main(){
    //a pointer is a variable whose value is the address of another variable
    
    int a = 5;                  // 1 block 4 bytes, address - 2002, value - 5
    float b = 2;                // 1 block 4 bytes, address - 3002, value - 2.1

    int* c;                     //pointer -to- integer || 1 block of <> bytes, address - 1001 , value <address>
    c = &a;                     //1 block of <> bytes, address - 1001 , value <2002>

    //same data type pointer can store same datatype variable 

    float* d = &b;              //pointer -to- float 

    int arr[10]; //{1,1,1,1,1,1,.......}  //it gives the address to the first element so arr is also a pointer
    return 0;

}