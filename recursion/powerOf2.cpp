#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

int pow(int n){
    if(n==0)    return 1;

    return 2*pow(n-1);
}
 
int main()
{
    cout<<pow(3);
    return 0;
}