// NAIVE SOLUTION
// Time Complexity : theta(n^2)
// Space Complexity : theta(n^2)

// Last column becomes the first row
// second last column becomes second row

void rotate(int mat[R][C]){

    int temp[n][n];

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            temp[n-j-i][i] = mat[i][j];
        }
    }
    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            mat[i][j] = temp[i][j];
        }
    }
}