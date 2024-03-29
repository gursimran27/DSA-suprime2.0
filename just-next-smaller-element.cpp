#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


// approch-1 using 2 loops


// approch-2 using stacks
void justNextSmallerElement(vector<int>&nums){
    stack<int>s;//store indices
    for(int i=0;i<nums.size();i++){
        while(!s.empty() and nums[s.top()]>nums[i]){
            nums[s.top()]=nums[i];
            s.pop();
        }
        s.push(i);//index is pushed
    }

    // some element left in stack
    while(!s.empty()){
        nums[s.top()]=-1;
        s.pop();
    }
}
 
int main()
{
    vector<int>v={2,4,5,3,2};
    justNextSmallerElement(v);

    for(auto&x:v)
        cout<<x<<" ";
return 0;
}