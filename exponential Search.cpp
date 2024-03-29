#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


int binarySearch(vector<int>nums,int l,int h,int target){
    int mid;
    while(l<=h){
        mid=l+(h-l)/2;
        if(nums[mid]==target)   return mid;
        else if(nums[mid]>target) return h=mid-1;
        else l=mid+1;
    }
    return -1;
}


int exponentialSearch(vector<int>&nums,int target){
    int n=nums.size();

    if(nums[0]==target)  return 0;

    int i=1;
    while(i<n and nums[i]<=target){
        if(nums[i]==target) return i;
        i=i*2; //Exponential Search
    }
    // now i get a lower and upper bound so apply BS in it
    return binarySearch(nums,i/2,min(i,n-1),target);//min() use so to check if i may not goes out of bound

}
 
int main()
{
    
    vector<int>v={1,2,3,4,5,6,7,8,9,12};

    cout<<exponentialSearch(v,6);

return 0;
}