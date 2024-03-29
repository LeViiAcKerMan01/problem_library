// Ques- First negative integer in every window of size k
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = sizeof(arr) / sizeof(arr[0]);

    // We have to print the first negative number in every k sized window;

    /*
    1- Humko har ek k sized window main jana hai
    2- sari k sized window mein, jinme bhi negative number exist krte h, first negative number print krna hai
    3- output mein array of negative numbers return kr skte ho.
    
    Your Purpose:
    //For interviews :
    1- Phle brute force discuss krna , aur fir usko improve krna.
    2- Ye nhi ki tum ratte hui approach mat btao
    3- Repeated task ko check krke use improve kro
    */

   int k = 4; // where k is the window size for the given question

   vector<long long> res; // To store all the negative elements in the subarray of size k

   list<long long> l; // To store the first negative number in the subarray

   int i = 0;
   int j = 0;

   while(j < k){

    // In previous question we are needed to find the sum , but in this question we need to find the first negative in every k sized subarray
    if(arr[j] < 0){

        l.push_back(arr[j]);
    }
    if(j-i+1 < k){

        j++;
        // This condition remains same for every problem.
        // until we donot attain the windowsize , we need to increase j by 1 each time
    }

    else if(j-i+1 == k){

        if(l.size() == 0){

            res.push_back(0);
        }
        else{

            res.push_back(l.front());

            if(arr[i] < 0){

                l.pop_front();
                
                
            }
            i++;
            j++;
        }
    }
    
   }
   for(auto it : res){
    
        cout<<it<<endl;
   }


}
// Need to fix this as soon as possible 