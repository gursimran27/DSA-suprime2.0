#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(*arr);


    int temp=arr[n-1];

    for(int i=n-1;i>=1;i--){
        arr[i]=arr[i-1];
    }

    arr[0]=temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}