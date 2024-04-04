#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

// * question-> you are given an integer , return its digits in a vector


void func(int n,vector<int>&ans){
    if(n<=0)    return;


    func(n/10,ans);//head recursion

    ans.push_back(n%10);
}

 
int main()
{
    int n=4215;
    vector<int>ans;
    
    func(abs(n),ans);

    // reverse(ans.begin(),ans.end());//as head recursion used

    for(auto&x:ans) 
        cout<<x<<" ";
    return 0;
}