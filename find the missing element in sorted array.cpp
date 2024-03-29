#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

// *find the missing element in sorted array of range [1,n];

// approch 1-> O(n) using indices help->done 
// approch 2-> O(n) using math i.e sum i.e n(n+1)/2->done

// approch 3-> O(log n) using binary seach
int missingNunberUsingBS(vector<int>& nums){
    int l=0;
    int h=nums.size()-1;
    int mid;
    int ans;
    int diff;

    while(l<=h){
        mid=l+(h-l)/2;
        diff=abs(mid-nums[mid]);

        if(diff==1)//search in right side of mid
            l=mid+1;
        else if(diff==2){
            ans=mid;
            //may have the possibility that the diff of 2 also lies in left of mid also so
            h=mid-1;
        }
    }

    return ans+1;
}

 
int main()
{
    vector<int>nums={1,2,3,4,6,7,8,9};
    cout<<missingNunberUsingBS(nums);
return 0;
}