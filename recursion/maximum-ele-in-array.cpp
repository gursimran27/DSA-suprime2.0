#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)
 
int maximum(int arr[],int size,int maxi,int index){
    // base caase
    if(index>=size) return maxi;

    maxi=max(arr[index],maxi);

    int max=maximum(arr,size,maxi,index+1);
    return max;
}
 
int main()
{
    int arr[5]={1,2,3,2,5};

    cout<<maximum(arr,Size,INT_MIN,0);
    return 0;
}