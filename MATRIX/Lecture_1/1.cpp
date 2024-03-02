#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[3][2] = {{10, 20},
                     {30, 40},
                     {50, 60}};
    
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 2; j++){

            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
    // A simple 3 * 2 matrix in C++
}

// Traversal in a multidimensional arrays

// Elements in the multidimensional arrays are stored in row major order
// Internal curly braces and multilines are optional.
// only the first dimension can be omitted when we initialize the multidimensional array.
// int arr[][2] = {{1, 2}, {3, 4}};
// int arr[][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};