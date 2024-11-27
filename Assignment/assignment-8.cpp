#include <iostream>
using namespace std;

//Write a class to store data of students in a college implement multiple types of constructorrs, implement Destructors and use static data members or functions to issue roll no. to enery student class object

class CollegeStudent {
private:
    string name;
    int roll_no;
    int age;
    string department;
    static int total;  // Static member to keep track of the total number of students

public:
    // Default constructor
    CollegeStudent() {
        name = "";
        age = 0;
        department = "";
        total++;
        roll_no = total;
    }

    // Parameterized constructor
    CollegeStudent(string n, int a, string d) {
        name = n;
        age = a;
        department = d;
        total++;
        roll_no = total;
    }

    // Destructor
    ~CollegeStudent() {
        total--;
    }

    // Method to set data
    void setData(string n, int a, string d) {
        name = n;
        age = a;
        department = d;
    }

    // Method to print data
    void printData() {
        cout << "Student Record" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Department: " << department << endl;
        cout << "Age: " << age << endl;
    }

};

// Initialize the static member
int CollegeStudent::total = 0;

int main() {
    // Creating student objects
    CollegeStudent a;  // Default constructor
    CollegeStudent b;  // Default constructor
    CollegeStudent c;  // Default constructor
    CollegeStudent d;  // Default constructor
    CollegeStudent e;  // Default constructor
    CollegeStudent f;  // Default constructor

    // Creating a student object using the parameterized constructor
    CollegeStudent g("Rohit", 15, "CS");
    g.printData();  // Print data of student g

    
    return 0;
}
