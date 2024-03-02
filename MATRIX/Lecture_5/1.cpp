// TRANSPOSE OF A MATRIX
// Using an array to constain the swapped elements
#include<bits/stdc++.h>
using namespace std;

const int n = 3;
// Naive solution to find the transpose the matrix
void TransposeMatrix(int mat[n][n]){

    int temp[n][n];

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            temp[i][j] = mat[j][i]; // or temp[j][i] = mat[i][j]
        }
    }
    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            mat[i][j] = temp[i][j];
        }
    }
    // Printing the matrix of order 3
    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int mat[n][n] = {{1,2,3}, {4,5,6}, {7,8,9}};

    TransposeMatrix(mat);

    return 0;
}
