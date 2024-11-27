#include <iostream>
#include <list>
#include <algorithm> // For std::find

using namespace std;

int main() {
    list<int> myList;

    // Adding elements to the list
    myList.push_back(10); // Add to the end
    myList.push_back(20);
    myList.push_front(5); // Add to the beginning
    myList.push_front(2);

    // Display the list
    cout << "List after adding elements: ";
    for (int value : myList) {
        cout << value << " ";
    }
    cout << endl;

    // Removing elements from the list
    myList.pop_back(); // Remove from the end
    myList.pop_front(); // Remove from the beginning

    // Display the list
    cout << "List after removing elements: ";
    for (int value : myList) {
        cout << value << " ";
    }
    cout << endl;

    // Insert element at a specific position
    auto it = myList.begin();
    advance(it, 1); // Move iterator to the second position
    myList.insert(it, 15); // Insert 15 at the second position

    // Display the list
    cout << "List after inserting elements: ";
    for (int value : myList) {
        cout << value << " ";
    }
    cout << endl;

    // Find and erase element
    it = find(myList.begin(), myList.end(), 20);
    if (it != myList.end()) {
        myList.erase(it); // Erase element 20 if found
    }

    // Display the list
    cout << "List after finding and removing 20: ";
    for (int value : myList) {
        cout << value << " ";
    }
    cout << endl;

    // Clear all elements
    myList.clear();

    // Display the list
    cout << "List after clearing all elements: ";
    for (int value : myList) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
