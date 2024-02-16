// How to check if a given number is a power of 2 ?

#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int x)
{
    if(x == 0)
        return false;
    else
    {
        while(x % 2 == 0) x /= 2;
        return (x == 1);
    }
}

int main(){

    bool n = isPowerOfTwo(1);
    bool m = isPowerOfTwo(64);

    cout<< n << " " << m << endl;
    
 
}