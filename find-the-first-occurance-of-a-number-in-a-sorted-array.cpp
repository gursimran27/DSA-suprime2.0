#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

// *find the first occurance of a number in the sorted array
// given sorted so may be Binary search


int FirstOccurance(vector<int> &nums,int target){
    int l=0;
    int h=nums.size()-1;
    int ans=-1;

    int mid;
    while(l<=h){
        mid=(l+h)/2;

        if(nums[mid]==target){
            ans=mid;
            h=mid-1; // we need to find the smallest index
        }

        else if(nums[mid]>target)
            h=mid-1;
        else
            l=mid+1; 
    }

    return ans;
}


int lastOccurance(vector<int> &nums,int target){
    int l=0;
    int h=nums.size()-1;
    int ans=-1;

    int mid;
    while(l<=h){
        mid=(l+h)/2;

        if(nums[mid]==target){
            ans=mid;
            l=mid+1; // we need to find the lsat index
        }

        else if(nums[mid]>target)
            h=mid-1;
        else
            l=mid+1; 
    }

    return ans;
}


int totalOccurance(vector<int>&v,int target){
    int first=FirstOccurance(v,30);
    int last=lastOccurance(v,30);

    return last-first+1;
}
 
int main()
{
    vector<int>v={10,20,30,30,30,30,40,50};

    // cout<<FirstOccurance(v,30);
    // cout<<lastOccurance(v,30);

    cout<<totalOccurance(v,30);

return 0;
}