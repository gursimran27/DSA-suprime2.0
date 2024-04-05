#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


bool palindrome(string &s,int l,int r){
    // base case
    if(l>=r)    return 1;


    // ek case hum solve krenge
    if(s[l]!=s[r]) return false;

    //  recurse on remaining string
    bool ans=palindrome(s,l+1,r-1);
    return ans;
}
 
int main()
{
    string s="racecar";
    cout<<palindrome(s,0,s.size()-1);
    return 0;
}