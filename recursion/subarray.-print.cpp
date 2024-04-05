#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

void subarray(vector<int>&nums,int start,int end){
    // base case
    if(start>=nums.size() and end>=nums.size()) return ; 


    // ek case hum solve karenge
    if(end>=nums.size() and start<nums.size()){
        start++;
        end=start;
    }

    for(int i=start;i<=end and start<nums.size();i++)
        cout<<nums[i]<<" ";
    cout<<endl;

    // recursion handle
    subarray(nums,start,end+1);
}
 
 
int main()
{
    vector<int> nums={1,2,3,4,5};
    subarray(nums,0,0);//(array,startPointer,endPointer)
    return 0;
}