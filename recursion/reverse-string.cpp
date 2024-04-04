#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


void reverse(string s,int index,string &ans){
    // base case
    if(index>=s.size()) return;

    reverse(s,index+1,ans);

    ans.push_back(s[index]);

}



void reverse2(string &s,int l,int r){
    // base case
    if(l>=r) return;

    swap(s[l],s[r]);

    reverse2(s,l+1,r-1);
}
 
int main()
{
    // approch-1
    // string s="hello world";
    // string ans="";
    // reverse(s,0,ans);
    // cout<<ans;



    // approch-2
    string s="hello world";
    reverse2(s,0,s.size()-1);//(string,start,end)
    cout<<s;
    return 0;
}