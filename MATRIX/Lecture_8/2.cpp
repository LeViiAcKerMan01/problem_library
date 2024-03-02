// EFFICIENT SOLUTION 
// Time Complexity : O(R + C)


// Approach explained :

// 1- begin from the top right corner
// 2- If x is same, print position and return
// 3- If x is smaller, move left
// 4- if x is greater, move down

void search(int mat[R][C], int x){

    int i = 0, j = C-1;
    bool isFound = false;

    while(i < R && j >= 0){

        if(mat[i][j] == x){

            cout<<"found at C"<<i<<" "<<j<<endl;
            isFound = true;
            break;
        }
        else if(mat[i][j] > x){

            j--;
        }
        else{
            i++;
        }
    }
    if(isFound == false){

        cout<<"Not Found"<<endl;
    }
}
