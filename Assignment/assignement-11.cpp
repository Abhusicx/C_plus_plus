//given A number is called pretty if its last digit is 2,3,or9. Write a program that prints all the "pretty numbers" between two input numbers L(left) and r(right) , such that any pretty number lies in the open rang (L,R)[implement STL Vector]

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int l, r;
    
    // Get input values for bounds L and R
    cout << "Enter values of bound L & R:" << endl;
    cin >> l >> r;
    
    // Check if bounds are valid
    if (l >= r) {
        cout << "Invalid range. L should be less than R." << endl;
        return 1;
    }
    
    // Iterate through the open interval (L, R)
    for (int i = l + 1; i < r; ++i) {
        int temp = i % 10;
        if (temp == 2 || temp == 3 || temp == 9) {
            arr.push_back(i);
        }
    }
    
    // Print all the "pretty" values
    cout << "Printing all the 'pretty values' between " << l << " and " << r << ":" << endl;
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << endl;
    }
    
    return 0;
}
