#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

// * question is-> print index of all the occurances of target


void func(int arr[],int size,int index,int target){
    if(index>=size) return;

    if(arr[index]==target)  cout<<index<<" ";

    func(arr,size,index+1,target);//!tail recursion
}
 
int main()
{
    int arr[5]={1,2,1,11,1};

    func(arr,Size,0,1);
    return 0;
}