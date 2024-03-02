// ARRAY OF POINTERS TECHNIQUE

#include<bits/stdc++.h>
using namespace std;

int main(){

    int m = 3;
    int n = 2;

    int *arr[m]; // creating array of pointers
    // Creates a 2-D array
    for(int i = 0; i < m; i++){

        arr[i] = new int[n]; 
        // individually allocating memory for individual rows
    }

    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){

            arr[i][j] = 10;
            cout<<arr[i][j]<<" ";
        }
    }
}

// OUTPUT : 10 10 10 10 10 10 