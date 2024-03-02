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
        
        if(x < mat[0][0]){

            cout<<"Not Found"<<endl;
            break;
        }
        if(x > mat[R-1][C-1]){

            cout<<"Not Found"<<endl;
            break;
        }
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
// slightly optimizing the code 2

// 1- If th element is lower the top leftmost element, then print not found instantly
// 2- If the element is greater than the bottom rightmost element, then print not found instantly