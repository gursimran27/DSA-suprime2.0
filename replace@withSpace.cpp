#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


void func(char ch[]){
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]=='@')
            ch[i]=' ';
        i++;
    }
}
 
int main()
{
    char ch[50];
    cin.getline(ch,50);
    func(ch);
    cout<<ch;
return 0;
}