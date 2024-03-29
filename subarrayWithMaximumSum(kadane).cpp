#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


void maxSubArray(vector<int>& nums) {
      //modified Kadanne's algo O(n)
        int sum=0;
        int maxi=INT_MIN;
        int startIndex=-1;
        int endIndex=-1;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            if(sum>maxi){
                maxi=sum;
                endIndex=i;
            }

            if(sum<0){ //negative sum as it will just decrement the sum further so set it to 0
                sum=0;
                startIndex=i+1;
            }
        }
        for(int i=startIndex;i<=endIndex;i++)
            cout<<nums[i]<<" ";
    }
 
int main()
{
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    maxSubArray(nums);
return 0;
}