#include<iostream>
using namespace std;

int main(){
    int i , j , n;

    cout << "please enter the order of matrix (n) : ";
    cin >> n;
    int arr[n][n], sol[n][n];

    cout << "please enter all element of nxn matrix: " << endl;
    for (i = 0; i<n ; i++){
        for(j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    cout << "calculating the transpose " << endl;
    for(i = 0; i<n; i++){
        for(j=0; j<n; j++){
            sol[i][j] = arr[j][i];
        }
    }

    cout << "the matrix is : " << endl;
    for (i = 0; i<n ; i++){
        for(j = 0; j<n; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "the transpose matrix is : " << endl;
    for (i = 0; i<n ; i++){
        for(j = 0; j<n; j++){
            cout << sol[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}