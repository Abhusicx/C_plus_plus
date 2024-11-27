#include<iostream>
using namespace std;

class employee{
    private:
    string name;
    string phone_no;
    string jobpost;
    int age;
    public:
    void setdata(string n, string p, string j, int a){
        name = n;
        phone_no = p;
        jobpost = j;
        age = a;
    }

    void putdata(){
        cout << "---employee record---" << endl;
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "phone no. " << phone_no << endl;
        cout << "jobpost : " << jobpost << endl;
    }
};

int main(){
    employee a,b;
    a.setdata("ramesh" , "0480954839" , "software engineer", 29);
    a.putdata();
    b.setdata("abhijeet" , "0740864058" , "intern " , 21);
    b.putdata();

    return 0;
}