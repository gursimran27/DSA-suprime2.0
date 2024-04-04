#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

void func(int arr[],int size,int index){
    if(index==size)return;

    cout<<arr[index]<<" ";
    func(arr,size,index+1);
}
 
int main()
{
    int arr[5]={1,2,3,4,5};

    func(arr,Size,0);
    return 0;
}