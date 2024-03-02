// DOUBLE POINTER TECHNIQUE
// To create a variable sized array
#include<bits/stdc++.h>
using namespace std;

int main(){

    int m = 3; int n = 2;
    int **arr;  // initializing the double Pointer

    arr = new int *[m];// creating an array of pointers
    
    for(int i = 0; i < m; i++){

        arr[i] = new int[n];
    }

    // Print the 2-D array
    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){

            arr[i][j] = 10;

            cout<<arr[i][j]<<" ";
        }
    }
}

// OUTPUT : 10 10 10 10 10 10 
// It is not cache friendly
// the arrays are not stored at contiguous locations