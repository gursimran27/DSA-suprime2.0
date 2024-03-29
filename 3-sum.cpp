#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define size sizeof(arr)/sizeof(*arr)


bool find3Numbers(int arr[], int n, int X)
    {
        //Your Code Here
        
        //! Approch-1 brute force by calculation all triplets=>O(n3)
    //     for(int i=0;i<n-2;i++){
    //         for(int j=i+1;j<n-1;j++){
    //             for(int k=j+1;k<n;k++){
    //                 if(arr[i]+arr[j]+arr[k]==X)
    //                     return true;
    //             }
    //         }
    //     }
        
    // return false;

    
    
    // !Approch-2 Two-Pointer technique o(n2)
    int l,r;
     /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
    sort(arr, arr + n);//o(nlogn)
    
    for(int i=0;i<n-2;i++){
        l=i+1;
        r=n-i;
        while (l < r) {
            if (arr[i] + arr[l] + arr[r] == X)
                return true;
            else if (arr[i] + arr[l] + arr[r] < X)
                l++;
            else
                r--;
        }
    }
    return false;
}

 
int main()
{
    int arr[]={10,20,30,40,50,60};
    cout<<find3Numbers(arr,size,90);
return 0;
}