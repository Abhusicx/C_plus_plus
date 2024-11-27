//check if a given input string is a palindrome 
#include<iostream>
using namespace std;

int main(){
    string input_string;
    cout << "enter the string: " ;
    cin >> input_string;
    int len = input_string.length();
    char rev_string[len];

    for(int i = 0; i<len; i++){
        rev_string[i] = input_string[len-1-i];
    }

    bool is_palindrome = true;
    for(int i = 0; i<len; i++){
        if(rev_string[i] == input_string[i]){
            continue;
        }
        else{
            is_palindrome = false;
            break;
        }
    }

    if(is_palindrome){
        cout << "the input string of " << input_string << " is a palindrome" << endl;
    }
    else{
        cout << "the input string of " << input_string << " is not a palindrome" << endl;
    }
    return 0;
}