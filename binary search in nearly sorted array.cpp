#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


int BSinNearlySortedArray(vector<int>& nums, int target){
    int l=0;
    int h=nums.size()-1;
    int mid;

    while(l<=h){
        mid=l+(h-l)/2;

        if((mid-1)>=0 and nums[mid-1]==target)
            return mid-1;
        if(nums[mid]==target)
            return mid;
        if((mid+1)<nums.size() and nums[mid+-1]==target)
            return mid+1;

        else if(nums[mid]>target)
            h=mid-2;
        else   
            l=mid+2;
    }

    return -1;
}
 
int main()
{
    vector<int>nums={20,10,40,30,60,50};

    cout<<BSinNearlySortedArray(nums,10);
    
return 0;
}