#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

int binarySearch(int arr[],int l ,int h,int target){
    // base case
    if(l>h) return -1;

    int mid=l+(h-l)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]<target) return binarySearch(arr,mid+1,h,target);//move right
    else return binarySearch(arr,l,mid-1,target);//move left

}
 
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    cout<< binarySearch(arr,0,Size-1,8);
    return 0;
}