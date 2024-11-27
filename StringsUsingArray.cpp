#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char fullname[20] ;
    char firstname[10];
    char lastname[10];

    cin >> firstname;
    cin >> lastname;
    strcpy(fullname, firstname);
    strcat(fullname, lastname);
    cout << fullname << endl;

    cout << strlen(fullname) << endl;

    return 0;
}