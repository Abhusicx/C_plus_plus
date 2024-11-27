#include<iostream>
using namespace std;

int main(){
    int radius;
    float s_area, volume , PI;
    PI = (float)22/7;

    cout << "enter radius"<< endl;
    cin >> radius;

    s_area = 4 * PI * radius * radius;
    volume = (4/3) * PI * radius * radius * radius;

    cout << s_area << endl;
    cout << volume;

    //comment

    /*
    multiple line comment
    */

    //select a area of text and click [ctrl + /]

    return 0;
}