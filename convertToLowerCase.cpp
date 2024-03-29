#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

void lowerCasee(char ch[]){
    int i=0;

    while(ch[i]!='\0'){
        if(ch[i]>='a' and ch[i]<='z'){
            // ch[i]=ch[i]-'a'+'A';
            ch[i]=ch[i]-32;
        }
        i++;
    }
}
 
int main()
{
    char ch[100];
    cin.getline(ch,100);
    lowerCasee(ch);
    cout<<ch;

return 0;
}