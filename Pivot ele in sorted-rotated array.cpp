#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)
 

    int pivotIndex(vector<int>&nums){
        int l=0;
        int h=nums.size()-1;

        while(l<=h){
            int mid=l+(h-l)/2;

            if(l==h)//corner case when single ele
                return l;//return h or return mid



            if((mid+1)<nums.size() and nums[mid]>nums[mid+1])//this condition never occur in rest of array
                return mid;

            else if((mid-1)>=0 and nums[mid]<nums[mid-1])//this condition never occur in rest of array
                return mid-1;

            else if(nums[mid]<nums[0])//nums[l] instead of nums[0] //mid is in part B
                h=mid-1;

            else if(nums[mid]>=nums[0])//nums[l] instead of nums[0]//mid lise in part A
                l=mid+1; 

        }
        return -1;
    }


int main()
{
        vector<int>nums={12,14,16,2,4,6,8,10};

        cout<<pivotIndex(nums);
    
return 0;
}