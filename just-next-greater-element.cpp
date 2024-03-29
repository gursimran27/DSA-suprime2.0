#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


    vector<int> NGEapproch1(vector<int>& nums) {

        // using 2 loops O(n2)
        int l;
        for(int i=0;i<nums.size()-1;i++){
            l=i+1;
            while(l<nums.size()){
                if(nums[l]>nums[i]){
                    nums[i]=nums[l];
                    break;
                }
                l++;
                if(l==nums.size())
                    nums[i]=0;
            }
        }
        nums[nums.size()-1]=0;
        return nums;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
        
    }


    vector<int> NGEapproch2(vector<int>& nums){

        // using stack O(n)
        stack<int> s;//store indices
        for(int i=0;i<nums.size();i++){
            while(!s.empty() && nums[s.top()]<nums[i]){
                nums[s.top()]=nums[i];
                s.pop();
            }
            s.push(i);//index is pushed
        }

        // some element left in stack
        while(!s.empty()){
            nums[s.top()]=0;
            s.pop();
        }

        return nums;
    }

 
int main()
{
    vector<int>v={4,5,2,6,25,7,8};

    // vector<int>ans=NGEapproch1(v);
    vector<int>ans=NGEapproch2(v);
    for(auto x:ans)
        cout<<x<<" ";
return 0;
}