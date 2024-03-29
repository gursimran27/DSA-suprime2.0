#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


 vector<int> rearrangeArray(vector<int>& nums) {
        // approch-1
        // true/1->represent that current index is for a +ve number
        // false/0 represent that the current index is for a -ve number

        // as the first index is for +ve number so 
        bool flag=1;

        int i=0;
        int j=1;
        while(j<nums.size()){
            if(flag){
                if(nums[i]<0 and nums[j]>0){
                    swap(nums[i],nums[j]);
                    i++;
                    flag=!flag;
                }
                if(nums[i]>0){
                    i++;
                    flag=!flag;
                }
            }

            if(!flag){
                if(nums[i]>0 and nums[j]<0){
                    swap(nums[i],nums[j]);
                    i++;
                    flag=!flag;
                }
                if(nums[i]<0){
                    i++;
                    flag=!flag;
                }

            }
            j++;
        }
        return nums;
    }
 
int main()
{
    vector<int>p={-37,-10,-9,15,14,31};
    rearrangeArray(p); 
    for(auto x:p){
        cout<<x<<" ";
    }
return 0;
}