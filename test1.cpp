#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


string findLatestTime(string s) {
        char a,b,c,d;
        for(int i=0;i<s.size();i++){
            if(i==0)    a=s[i];
            if(i==1)    b=s[i];
            if(i==3)    c=s[i];
            if(i==4)    d=s[i];
        }

        if(a=='?' and b=='?'){
            a='1';
            b='1';
        }
        
        if(a=='0' and b=='?')
                b='9';
        if(a=='1' and b=='?')
                b='1';
        if(a=='?' and (b=='0' or b=='1'))
                a='1';
        if(a=='?' and (b>='2' and b<='9'))
                a='0';
        
        if(c=='?')
                c='5';
        if(d=='?')
                d='9';
        
        s="";
        s.push_back(a);
        s.push_back(b);
        s.push_back(':');
        s.push_back(c);
        s.push_back(d);
        
        return s;
    }



 
int main()
{
        vector<int>v={1,2,32,21};
    // cout<<minimumSubarrayLength(v,0);
    // cout<<((2|5) & 5);
    // cout<<minimumSubarrayLength(v,55);
    
    // cout<<findLatestTime( "??:1?");


    priority_queue<int>pq;
    pq.push(10);
    pq.push(101);
    pq.push(110);

    cout<<pq.top();

return 0;
}