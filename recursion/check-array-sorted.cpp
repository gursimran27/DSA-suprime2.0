#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)
// question-> check if array is sorted in ascending order or not

bool check(int arr[],int size,int index){
    // base case 
    if(index>=size) return 1;
    
    if(arr[index]<arr[index-1]) return 0;

    return check(arr,size,index+1);
}
 
int main()
{
    int arr[5]={0,1,2,3,4};

    cout<<check(arr,Size,0+1);//start from 1st index as array of 1 size is always sorted
    return 0;
}