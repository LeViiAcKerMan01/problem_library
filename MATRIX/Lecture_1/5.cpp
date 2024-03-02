#include<bits/stdc++.h>
using namespace std;

int main(){

    int m = 3;
    int n = 2;
    vector<int> arr[m]; 
    // created a vector having m rows
    

    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){

            arr[i].push_back(10);
        }
    }

    // Print the 2-D array

    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){

            cout<<arr[i][j]<<" ";
        }
    }
}

// OUTPUT : 10 10 10 10 10 10 