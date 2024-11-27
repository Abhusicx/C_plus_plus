//Write a program to store the information of students in college. Then store all the objects's data into an external file using file streams
#include<iostream>
#include<fstream>
using namespace std;

class CollegeStudent{
    private:
    string name;
    int roll_no;
    int age;
    string department;
    static int total;

    public:
    CollegeStudent(){
        name = "";
        age = 0;
        department = "";
        total++;
    }

    CollegeStudent(string n, int a, string d){
        name = n; age = a; department = d;
        total++;
        roll_no = total;
    }

    void setData(string n, int a, string d){
        name = n; age = a; department = d;
    }

    void printdata(){
        cout << "Student record" << endl;
        cout << "name : " << name << endl;
        cout << "Roll no. : " << roll_no << endl;
        cout << "Department : " << department << endl;
        cout << "Age : " << age << endl;
    }

    friend ofstream & operator << (ofstream&, CollegeStudent);
};

int CollegeStudent::total = 0;

int main(){
    CollegeStudent a , b, c, d ,e ,f;
    CollegeStudent g("abhijeet " , 16 , "CS");
    ofstream my_file;           //output file stream
    my_file.open("my.txt", ios::app);
    my_file << a << b << c << d << e << f << g; 
    my_file.close();

    return 0;
}

ofstream & operator << (ofstream &out, CollegeStudent obj){
    out << "----------------" << endl;
    out << "name : " << obj.name << endl;
    out << "roll no. : " << obj.roll_no << endl;
    out << "department : " << obj.department << endl;
    out << "age : " << obj.age << endl;
    return out;
}