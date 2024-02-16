// Count the number of ones in the binary representation of the given number.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    while(n){

        n = n & (n-1);
    }
}