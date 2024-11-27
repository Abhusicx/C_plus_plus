#include <iostream>
using namespace std;

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                // Swap elements
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;  // size of array
    cout << "Please enter the size of the array: ";
    cin >> n;

    // Allocate memory for the array
    int* arr = new int[n];

    cout << "Please enter all the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sorting..." << endl;
    sortArray(arr, n);
    cout << "Array is sorted now:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // Memory deallocation omitted

    return 0;
}
