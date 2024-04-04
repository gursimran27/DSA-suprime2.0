#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

bool search(int arr[],int size,int index,int target){
    if(index==size) return false;

    if(arr[index]==target)  return true;

    return search(arr,size,index+1,target);
}
 
int main()
{
    int arr[5]={1,2,3,4,5};

    cout<<search(arr,Size,0,2);
    return 0;
}