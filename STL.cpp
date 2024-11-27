// STL - Standard Template Library

/*
- algorithms(functions)
- container(data structures)
- iterators
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    /*vector<int> arr_vec;
    int temp;

    cin >> temp;

    arr_vec.push_back(temp);
    arr_vec.push_back(1);
    arr_vec.push_back(2);
    arr_vec.pop_back();*/

    vector<int> arr_vec{3,6,2,5,19,11,12,4,87};

    for (int i = 0; i<arr_vec.size(); i++){
        cout << arr_vec[i] << "\t";
    }
    cout << endl;

    cout << "sorting................" << endl;
    sort(arr_vec.begin(), arr_vec.end());

    for (int i = 0; i<arr_vec.size(); i++){
        cout << arr_vec[i] << "\t";
    }
    cout << endl;

    string s= "testing";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}