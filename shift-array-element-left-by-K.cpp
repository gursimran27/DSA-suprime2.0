#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define size sizeof(arr)/sizeof(*arr)

void leftShiftByK(int arr[],int n,int k){
    int temp[k];
    for(int i=0;i<k;i++)
        temp[i]=arr[i];

    int i;
    for( i=0;i<n-k;i++)
        arr[i]=arr[i+k];
        
    int j=0;
    for(int k=i;k<n;k++)
        arr[k]=temp[j++];
    
}
 
int main()
{
    int arr[]={10,20,30,40,50};

    leftShiftByK(arr,size,3);

    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
return 0;
}