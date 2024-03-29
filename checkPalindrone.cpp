#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

bool checkPalindrone(char ch[]){
    int l=0;
    int r=strlen(ch)-1;

    while(l<=r){
        if(ch[l]!=ch[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}
 
int main()
{
    char ch[40];
    cin>>ch;
    cout<<checkPalindrone(ch);
return 0;
}