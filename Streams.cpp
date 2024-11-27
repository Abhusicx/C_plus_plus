#include <iostream>
#include <fstream>  // For file I/O

using namespace std;


int main() {
    /*// Create an object of ofstream (output file stream)
    ofstream outFile("my.txt");

    // Check if the file is open
    if (!outFile) {
        cerr << "Error: Could not open the file for writing.\n";
        return 1;
    }

    // Write some content to the file
    outFile << "Hello, this is a test file created using C++.\n";
    outFile << "This is the second line of the file.\n";

    // Close the file
    outFile.close();

    cout << "File created and content written successfully.\n";
    return 0;*/

    /*ofstream my_file;
    my_file.open("my.txt", ios::trunc);
    
    for(int i = 0; i< 10; i++){
        my_file << i*i << endl;
    }
    my_file << 9*9 << endl;

    my_file.close();*/

    ifstream my_file;
    my_file.open("my.txt");
    int a;
    while(!my_file.eof()){
        my_file >> a;
        cout << a << endl;
    }
    my_file.close();
    
    return 0;
}
