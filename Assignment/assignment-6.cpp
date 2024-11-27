#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    string phone_no;
    string job_post;
    int age;

public:
    // Friend functions for input and output
    friend ostream & operator << (ostream &out, const Employee &c);
    friend istream & operator >> (istream &in, Employee &c);
    
    // Assignment operator
    Employee& operator = (const Employee& c);

    // Default constructor
    Employee() : name(""), phone_no(""), job_post(""), age(0) {}
};

// Definition of the input operator
istream & operator >> (istream &in, Employee &c) {
    cout << "Enter name: ";
    in >> c.name;
    cout << "Enter phone number: ";
    in >> c.phone_no;
    cout << "Enter job post: ";
    in >> c.job_post;
    cout << "Enter age: ";
    in >> c.age;
    return in;
}

// Definition of the output operator
ostream & operator << (ostream &out, const Employee &c) {
    out << "Details are:\n";
    out << "Name: " << c.name << endl;
    out << "Phone number: " << c.phone_no << endl;
    out << "Job post: " << c.job_post << endl;
    out << "Age: " << c.age << endl;
    return out;
}

// Definition of the assignment operator
Employee& Employee::operator=(const Employee& c) {
    if (this != &c) { // Check for self-assignment
        name = c.name;
        phone_no = c.phone_no;
        job_post = c.job_post;
        age = c.age;
    }
    return *this;
}

int main() {
    Employee a, b;
    cin >> a;
    cout << a;
    b = a;
    cout << b;

    return 0;
}
