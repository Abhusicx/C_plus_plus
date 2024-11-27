//program to check if an input matrix is symmetric or skewed symmetric or neither
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "only a square matrix has the property to be symmetric or skewed symmetric" << endl;
    cout << "please enter the square matrix ordern (n), such that the order would be n*n" << endl;
    cin >> n;
    int arr[n][n];
    cout << "please enter all the values of the input array" << endl;
    for(int i= 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    cout <<"finding transpose to array... " << endl;
    int arr_temp[n][n];
    for (int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            arr_temp[i][j] = arr[j][i];
        }
    }

    cout << "checking if transpose is equal to Input arra (checking for symmetry)" << endl;
    bool is_symmetric = true;
    for(int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if(arr[i][j] = arr_temp[i][j]){
                continue;
            }else{
                is_symmetric = false;
                break;
            }
        }
        if(!is_symmetric){
            break;
        }
    }
    

    cout << "checking if it is skewed symmetric..." << endl;
    bool is_skewed_symmetric = true;
    for(int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if(arr[i][j] = - arr_temp[i][j]){
                continue;
            }else{
                is_skewed_symmetric = false;
                break;
            }
        }
        if(!is_skewed_symmetric){
            break;
        }
    }
    

    if (is_symmetric) {
        cout << "Input matrix is symmetric" << endl;
    } else if (is_skewed_symmetric) {
        cout << "Input matrix is skew-symmetric" << endl;
    } else {
        cout << "Input matrix is neither symmetric nor skew-symmetric" << endl;
    }
    return 0;
}