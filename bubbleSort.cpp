#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

void bubbleSort(vector<int>&nums){
    int n = nums.size();

int j;
    for(int i=0;i<n-1;i++){//0 based indexing so not i<=n-1
        j=0;
        while(j<n-i-1){//0 based indexing so not j<=n-i-1
            if(nums[j]>nums[j+1])
                swap(nums[j],nums[j+1]);
            j++;
        }
    }
}
 
int main()
{
    vector<int>nums={0,-1,5,1,21,2};
    bubbleSort(nums);

    for(auto& x:nums)   cout<<x<<" ";
return 0;
}