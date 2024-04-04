#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

int fact(int n){
    // base case 
    if(n==1 or n==0)    return 1;

    // recursive relation
    int ans=n*fact(n-1);

    // processing
    return ans;
}
 
int main()
{
    cout<<fact(4);
    return 0;
}