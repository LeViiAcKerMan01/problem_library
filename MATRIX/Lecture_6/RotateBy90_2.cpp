// Efficient solution :

// Time Complexity : theta(n^2)
// Auxilary Space : theta(1)

// Find the transpose of matrix
// Reverse individual columns

// we have already talked about efficient approach to find the transpose of a matrix

void rotate90(int mat[n][n]){
    //to find the Transpose of the matrix
    for(int i = 0; i < n; i++){

        for(int j = i+1; j < n; j++){

            swap(mat[i][j], mat[j][i]);
        }

    }
    // To reverse the columns
    for(int i = 0; i < n; i++){

        int low = 0, high = n-1;

        while(low < high){

            swap(mat[low][i], mat[high][i]);
            low++;
            high--;
        }
    }


}