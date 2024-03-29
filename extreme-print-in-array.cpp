#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
    int arr[]={10,20,30,40,50,60};
    int len=sizeof(arr)/sizeof(*arr);
    
    int l=0;
    int r=len-1;
    while(l<=r){
        if(l==r)
            cout<<arr[l];
        else
            cout<<arr[l]<<" "<<arr[r]<<" ";
        l++;
        r--;
    }

return 0;
}