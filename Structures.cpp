#include<iostream>
using namespace std;
struct employee{
    string name;
    int age;
    int salary;
    float performance;
};
int main(){
    int n;
    cout << "enter total no. of employees : " << endl;
    cin >> n;
    employee record[n];
    for(int i = 0; i<n; i++){
        cin >> record[i].name >> record[i].age >> record[i].salary >> record[i].performance ;
    }
    for(int i = 0; i<n; i++){
        cout << record[i].name << " " << record[i].age << " " << record[i].salary << " " << record[i].performance ;
    }
    return 0;
}