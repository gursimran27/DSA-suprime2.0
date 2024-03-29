#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)
 

 bool ispalindrone(string s)
{
    int l = 0;
    int r = s.size() - 1;
    while (l <= r)
    {
        char a = (char)tolower(s[l]);
        char b = (char)tolower(s[r]);
        while (l <= r && !isalnum(a))
        {
            l++;
            a = (char)tolower(s[l]);
        }

        while (l <= r && !isalnum(b))
        {
            r--;
            b = (char)tolower(s[r]);
        }

        if (a != b)
        {
            return 0;
        }

        l++;
        r--;
    }
    return 1;
}
int main()
{
    string str="A man, a plan, a canal: Panama";
    cout<<ispalindrone(str);
    
return 0;
}