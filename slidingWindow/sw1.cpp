// Give the maximum sum of 3 sized window or subarray in the given array.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[] = {1, 5, 32, 66, 27, 23, 43}; // size of the array is 7;
    int size = sizeof(a) / sizeof(a[0]); // To store the size of the array

    int i = 0;
    int j = 0;

    int window_size = 3; // Lets say we need a 3 sized window

    int sum = 0; // To store the sum of the window and push it to the sum vector

    vector<int> res;  // To store the sum of all the k sized window where k is the size of the window

    for(int i = 0; i <= size-window_size; i++){

        for(int j = i; j < i+window_size; j++){

            sum += a[j];
        }
        res.push_back(sum);
        sum = 0;
    }

    for(auto it : res){

        cout<<it<<endl;
    }
    cout<<endl;

    // To find the max sum of the subarrays sort the sum vector and return the last element as the maxSum;

    sort(res.begin(), res.end());

    int maxSum_subarray = res[res.size() -1];

    cout<<maxSum_subarray<<endl;

}