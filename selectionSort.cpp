#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


void selectionSort(vector<int >& nums){
    for(int i=0;i<nums.size()-1;i++){
        int minindex=i;//index
        int j=i+1;
        while(j<nums.size()){
            if(nums[j]<nums[minindex])
                minindex=j;
            j++;
        }
        swap(nums[minindex],nums[i]);
    }
}


int main()
{
    vector<int>nums={0,-1,5,1,21,2};
    selectionSort(nums);

    for(auto& x:nums)   cout<<x<<" ";
return 0;
}