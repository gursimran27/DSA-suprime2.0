#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


int sum(int n){
    if(n==1)    return 1;

    int ans=n+sum(n-1);
    
    return ans;
}
 
int main()
{
    cout<<sum(5);
    return 0;
}