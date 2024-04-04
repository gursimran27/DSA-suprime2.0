#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

// return index if found else return -1

int search(int arr[],int size,int index,int target){
    if(index==size) return -1;

    if(arr[index]==target)  return index;

    return search(arr,size,index+1,target);
}
 
int main()
{
    int arr[5]={1,2,3,4,5};

    cout<<search(arr,Size,0,22);
    return 0;
}