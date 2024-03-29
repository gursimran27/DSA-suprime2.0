#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

int longestConsecutive(vector<int>& nums) {

    //     int count;
    //     int maxcount=0;
    //     int n=nums.size();
    //     if(n==1)
    //         return 1;

    //     for(int i=0;i<n;i++){
    //         count=0;
    //         int j=0;
    //         while(nums[j]!=nums[i]-1 && j<n){
    //             j++;
    //         }
            
    //         count++;
    //         if(j>=n){
    //             int nextelement=nums[i]+1;
    //             int k=0;
    //             while(k<n){
    //                 if(nums[k]==nextelement){
    //                     count++;
    //                     nextelement+=1;
    //                     k=0;
    //                 }
    //                 k++;
    //             }
    //         }
    //         maxcount=max(count,maxcount);
    //     }
    //     return maxcount;
    // }




    // approch 2 using sorting O(nlogn)
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=1;
        int maxcount=1;
        if(n==1)
            return 1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1])
                continue;
            if(nums[i]==nums[i-1]+1)
                count++;
            else
                count=1;
            maxcount=max(count,maxcount);
        }
        return !n?0:maxcount;
    }
 
int main()
{
    vector<int>v={0,0,1,0,0,0,0,-1};
    cout<<longestConsecutive(v)<<endl;
return 0;
}