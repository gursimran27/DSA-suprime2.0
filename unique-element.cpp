#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
    int arr[]={1,2,3,3,22,2,1,11,12,11,12};
    int n=sizeof(arr)/sizeof(*arr);
    int ans=0;//0^a=a

    for(int i=0;i<n;i++){
        ans= ans^arr[i];
    }
    cout<<ans;
return 0;
}