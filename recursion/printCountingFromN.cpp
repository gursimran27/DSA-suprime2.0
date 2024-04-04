#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

void func(int n){
    if(n==0)    return;

    // cout<<n<<" ";//reverse 5-4-3-2-1//tail recursion 

    func(n-1);

    cout<<n<<" ";//1-2-3-4-5 //head recursion
}
 
int main()
{
    func(5);
    return 0;
}