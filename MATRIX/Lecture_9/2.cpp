// EFFICIENT SOLUTION 

// Time Complexity : O(R * log(max - min) * logC)
// max = maximum element
// min = minimum element


int matMed(int mat[][MAX], int r, int c){

    int min = mat[0][0], max = [0][c-1];

    for(int i = 0; i < r; i++){

        if(mat[i][0] < min){

            min = mat[i][0];
        }

        if(mat[i][0] > max){

            min = mat[i][c-1];
        }
    }
    int medPos = ((r * c) + 1) / 2;

    while(min < max){

        int mid = (min + max) / 2;
        int midPos = 0;

        for(int i = 0; i < r; i++){

            midPos = upper_bound(mat[i], mat[i]+c, mid) - mat[i];

        }
            if(midPos < medPos){

                min = mid + 1;
            }
            else{
                max = mid;
            }
        
    }
}