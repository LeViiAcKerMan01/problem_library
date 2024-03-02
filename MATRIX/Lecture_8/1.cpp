// Search in a row-wise and column-wise sorted matrix
// NAIVE SOLUTION 

void search(int mat[R][C], int x){

    bool isFound = false;

    for(int i = 0; i < R; i++){

        for(int j = 0; j < C; j++){

            if(mat[i][j] == x){

                cout<<"Found at "<<i<<j<<" ";
                isFound = true;
                break;
            }
        }
    }
    if(isFound == false){

        cout<<"Not Found"<<endl;
    }
}