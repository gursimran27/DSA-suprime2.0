#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


void insertionSort(vector<int>&nums){
    for(int i=1;i<nums.size();i++){
        int key=nums[i];

        int j=i-1;
        while(nums[j]>=key and j>=0){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
}
 
int main()
{
    vector<int>nums={0,-1,5,1,21,2};
    insertionSort(nums);

    for(auto& x:nums)   cout<<x<<" ";
return 0;
}