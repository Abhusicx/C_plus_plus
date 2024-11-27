//write two classes implementing, inheritance on the two show use of parameterized constructor of base class while making derived class
#include<iostream>
using namespace std;

class Student{      //base class
    protected:
    string name;
    int age;
    char grade;
    public:
    Student(string n, int a, char g){
        name = n; age = a; grade = g;
    }
};

class HighSchoolStudent: public Student{
    private:
    string school_name;
    public:
    HighSchoolStudent(string n , int a , char g, string school):Student(n,a,g){
        school_name = school;
    }

    void printInfo(){
        cout << "name of student: " << name << endl;
        cout << "age of student: " << age << endl;
        cout << "grade scored: " << grade << endl;
        cout << "name of high school: " << school_name << endl;
    }
};

int main(){
    HighSchoolStudent x("Rahul", 18 , 'A', "Sanskar school");
    x.printInfo();
    return 0;
}