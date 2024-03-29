#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)


int binarySearch(vector<int>&nums,int l,int h,int target){
    int mid;
    while(l<=h){
        mid=l+(h-l)/2;

        if(nums[mid]==target)   return mid;
        else if(nums[mid]>target)   h=mid-1;
        else l=mid+1;
    }
    return -1;
}





vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        // !approch-1 brute force o(n2) O(1)
        // for (int i = 0; i < n - 1; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (nums[i] + nums[j] == target) {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {}; // No solution found

    // !Approch-2 Two-pointer/sorting 0(nlogn) O(1)
    // sort(nums.begin(),nums.end());//O(nlongn)

    // int l=0;
    // int r=n-1;
    // while(l<r){
    //     if(nums[l]+nums[r]==target){
    //         return{nums[l],nums[r]};
    //     }
    //     else{
    //         if(nums[l]+nums[r]<target)
    //             l++;
    //         else
    //             r--;
    //     }
    // }
    // return {};
    // }


    // !approch-3 using binary search O(nlogn)
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        int compliment=target-nums[i];

        int in= binarySearch(nums,i+1,nums.size()-1,compliment);
        if(in!=-1) return {nums[i],nums[in]};
    }
    return {-1};


    // !approch-4 using hashmaps O(n) O(n)
    // hashmaps are just set of pairs.
    // vector<int> twoSumHash(vector<int>& nums, int target) {
    //     unordered_set<int>s;

    //     for(auto x:nums){

    //         auto it=s.find(target-x);
    //         if(it!=s.end()){
    //             return {x,*it};
    //         }
            
    //         s.insert(x);
    //     }
    //     return {};
    }
 
int main()
{
    vector<int>a;
    a.push_back(3);
    a.push_back(2);
    a.push_back(4);

    vector<int>ans= twoSum(a,5);
    for(auto x:ans)
        cout<<x<<" ";
    ;

    
return 0;
}