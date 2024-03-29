// Ques- Maximum sum subarray of size k

/* IDENTIFICATION

1- Question would be asking about subarray or substring
2- window size or any condition is given in the question
3- 
if window size is provided in the question - fixed window size question
if window size is not provided in the question and rather a condition is provided - variable window size question
*/

// This question is related to fixed window size question

// Window size could be found out by the formula : (j - i + 1); 
// here i is the start of the window and j is the wnd of the window

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {2, 5, 1, 8, 2, 9, 1};

    int size = sizeof(arr) / sizeof(arr[0]); // size of the array
    int i = 0;
    int j = 0;
    int k = 4; // window size , would be given in the question

    int sum = 0; // sum variable would vary as per the constraint of the given question, you can use long long , long , double etc.

    int mx = 0; // To store the max value of sum in the k sized aubarray of array arr;

    while(j < size){

        sum += arr[j];

        if(j - i + 1 < k){

            j++;
        }
        else if(j - i + 1 == k){

            mx = max(mx, sum);
            sum -= arr[i];
            i++;
            j++;
        }

    }
    cout<<mx<<endl;

}
