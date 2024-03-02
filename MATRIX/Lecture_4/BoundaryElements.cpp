// My implementation
#include<bits/stdc++.h>
using namespace std;

int main(){

    int m = 4;
    int n = 4;
    int arr[m][n] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    vector<int> res;
    // A fail code for the edge cases discussed

    // pushing the 1st row
    int i = 0;
    for(int j = 0; j < n; j++){

        res.push_back(arr[i][j]);
    }

    // Pushing the nth column
    int j = n-1;
    for(int i = 1; i < m; i++){

        res.push_back(arr[i][j]);
    }

    // Pushing the nth row
    i = m-1;

    for(int j = n-2; j >= 0; j--){

        res.push_back(arr[i][j]);
    }

    // Pushing the 1st column

    j = 0;

    for(int i = m-2; i >= 1; i--){

        res.push_back(arr[i][j]);
    }
    for(auto it : res){

        cout<<it<<" ";
    }
}