#include <iostream>
#include <fstream>  // For file I/O

using namespace std;

class Student {
public:
    string name;
    int rollno;
    float grade;
    static int totalstudents;

    Student(string n, float g) : name(n), grade(g) {
        rollno = Student::totalstudents;
        Student::totalstudents++;
    }

    // Friend function to overload << operator
    friend ofstream& operator<<(ofstream&, Student&);
};

int Student::totalstudents = 1;

// Overloaded << operator to write Student objects to file
ofstream& operator<<(ofstream& file, Student& s) {
    file << s.name << "\t"
         << s.rollno << "\t"
         << s.grade << "\n";
    return file; // Return the stream to allow chaining
}

int main() {
    // Create a Student object
    Student a("abhijeet", 91.4);

    // Open file in append mode
    ofstream my_file;
    my_file.open("my.txt", ios::app);
    
    if (!my_file) {
        cerr << "Error: Could not open the file for writing.\n";
        return 1;
    }
    
    // Write Student object to file
    my_file << a;
    
    // Close the file
    my_file.close();
    
    cout << "Student data written to file successfully.\n";
    return 0;
}
