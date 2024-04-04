#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

void subSequence(string s,int index,string output,vector<string>&ans){

    // base case
    if(index>=s.size()){
        ans.push_back(output);
        return;
    }

    //  recursive case
    // include the current character
    output.push_back(s[index]);
    subSequence(s,index+1,output,ans);
    // exclude the current character
    if(output!="")  output.pop_back();
    subSequence(s,index+1,output,ans);
}
 
int main()
{
    string s="abc";
    vector<string>ans;

    subSequence(s,0,"",ans);

    for(auto&x:ans){
        if(x=="")
            cout<<'@'<<endl;
        else
            cout<<x<<endl;
    }
        
    return 0;
}