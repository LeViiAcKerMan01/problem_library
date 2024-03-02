#include<bits/stdc++.h>
using namespace std;
const int R = 3;
const int C = 2;

void Print(int mat[R][C]){
// This function is only suppose to recieve a 3 * 2 matrix
    for(int i = 0; i < R; i++){

        for(int j = 0; j < C; j++){

            cout<<mat[i][j]<<" ";
        }
    }
}

int main(){

    
    int mat[3][2] = {{10, 20}, {30, 40}, {50, 60}};

    Print(mat);

    return 0;
}

// OUTPUT : 10 20 30 40 50 60 