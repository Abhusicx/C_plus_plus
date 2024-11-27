#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
    int area;

public:
    static int count;  // Declaration of static member variable
    static int HowMuchMemory(){             //static function
        return (count*12 + 4);
    }

    Rectangle() {
        length = 0;
        breadth = 0;
        area = 0;
        count ++;  // Increment the static count
    }

    void putVal(int l, int b) {
        length = l;
        breadth = b;
        area = l * b;
    }

    void displayVal() {
        cout << length << " " << breadth << endl;
    }
};

// Definition of the static member variable
int Rectangle::count = 0;

int main() {
    Rectangle a,b,c,d,e;
    cout << Rectangle::count << endl;  // Access the static member variable using class name
    cout << Rectangle::HowMuchMemory() << endl;
    return 0;
}
