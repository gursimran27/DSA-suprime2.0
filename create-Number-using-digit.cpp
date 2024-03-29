#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
    cout<<"how many number wanna u enter?";
    int n;
    cin>>n;

    int ans=0;
    int i=0;
    while(i<n){
        cout<<"enter "<<i+1<<"number";
        int num;
        cin>>num;

        ans=ans*10+num;
        i++;
    }
    cout<<endl<<ans;
return 0;
}