#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
    int area;

public:
    static int count;  // Declaration of static member variable

    Rectangle() {
        length = 0;
        breadth = 0;
        area = 0;
        count += 12;  // Increment the static count
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
    Rectangle a, b, c;  // Create three Rectangle objects
    a.putVal(1, 2);
    b.putVal(3, 4);
    c.putVal(5, 6);
    
    cout << Rectangle::count;  // Access the static member variable using class name

    return 0;
}
