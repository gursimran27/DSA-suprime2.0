#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

// * Q) Given an array where all elements appear even number of times except one. All repeating occurrences of elements appear in pairs and these pairs are not adjacent (there cannot be more than two consecutive occurrences of any element). Find the element that appears odd number of times.
// *Note that input like {2, 2, 1, 2, 2, 1, 1} is valid as all repeating occurrences occur in pairs and these pairs are not adjacent. Input like {2, 1, 2} is invalid as repeating elements don’t appear in pairs. Also, input like {1, 2, 2, 2, 2} is invalid as two pairs of 2 are adjacent. Input like {2, 2, 2, 1} is also invalid as there are three consecutive occurrences of 2.



// approch 1-> using XOR O(n)
// approch 2-> using sorting

// aprroch 2-> BS O(log n)

int findOddOccurance(vector<int>&nums){
    int l=0;
    int h=nums.size()-1;

    int mid;

    while(l<=h){
        if(l==h)    return l;
        mid=l+(h-l)/2;

        // 1->odd 0->even
        if(mid & 1){//odd index
            if(nums[mid]==nums[mid-1]){//lies in part A so move right
                l=mid+1;
            }else{//lies in part B so move left
                h=mid-1;
            }
        }
        else{//even index
            if(nums[mid]==nums[mid+1]){//lies in part A so more right
                l=mid+2;//2 as mid and mid+1 are same
            }else{//lies in part B or it is answer
                h=mid;
            }
        }
    }
    return -1;
}
 
int main()
{
    vector<int>nums={1,1,2,2,1,1,3,5,5,3,3,5,5};
    cout<<nums[findOddOccurance(nums)];
return 0;
}