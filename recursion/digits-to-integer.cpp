#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

void func(vector<int>& digits,int index,int &n){
    if(index>=digits.size())  return;

    n=n*10 + digits[index];

    func(digits,index+1,n);
}
 
int main()
{
    vector<int>digits={4,2,1,7};
    int n=0;

    func(digits,0,n);

    cout<<n;

    return 0;
}