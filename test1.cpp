#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


long long countSubstrings(string s, char c) {
        unordered_map<char,int>m;
        
        long long count=0;
        
        for(auto&x:s){
            if(x==c){
                count++;
                if(m.find(c)!=m.end()){
                    count+=m[x];
                }
                m[x]++;
            } 
        }
        return count;
    }
 
int main()
{
    cout<<countSubstrings("abada",'b');
return 0;
}