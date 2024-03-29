#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)



    vector<vector<int>> transposeOfSquareMatrix(vector<vector<int>>& nums) {
        // approch 1
        // for(int row=0;row<nums.size();row++){
        //     for(int col=0;col<nums[row].size();col++){
        //         if(col<row)
        //             continue;
        //         swap(nums[row][col], nums[col][row]);
        //     }
        // }

        // return nums;



        // approch 2;but error heap buffer overflow
        for(int row=0;row<nums.size();row++){
            for(int col=row;col<nums[row].size();col++){
                swap(nums[row][col],nums[col][row]);
            }
        }
        return nums;
    }

 
int main()
{
    vector<vector<int>>v={{1,2,3},{4,5,6},{7,8,9}};
    transposeOfSquareMatrix(v);

    for(auto x:v){
        for(auto y:x)
            cout<<y<<" ";
        cout<<endl;
    }
return 0;
}