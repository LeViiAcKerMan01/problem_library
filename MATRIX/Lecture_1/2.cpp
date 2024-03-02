// VARIABLE SIZED ARRAYS
// From C++ 14 standard , C++ allows variable sized arrays also referred as dynamic arrays
#include<bits/stdc++.h>
using namespace std;

int main(){

    int m = 3;
    int n = 2;
    int arr[m][n];

    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){

            arr[i][j] = i+j;
        }
    }

    // Print the 2-D array
    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){

            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}
// Output : 0 1 1 2 2 3 
// More ways to create multidimensional arrays are explained further