// Count the number of ones in the binary representation of the given number.

#include<bits/stdc++.h>
using namespace std;

int Count_one(int n){

    int count = 0;
    while(n){

        n = n & (n-1);
        count++;
    }
    return count;
    
}

int main(){

    int m = Count_one(23);
    cout<<m<<endl;
}