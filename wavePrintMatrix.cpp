#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

void wavePrint(vector<vector<int>>&nums){
    for(int col=0;col<nums[0].size();col++){
        
        // for even column->top down
        if(col%2==0){
            for(int row=0;row<nums.size();row++)
                cout<<nums[row][col]<<" ";
            
        }
        else{//odd columm->bottom up
            for(int row=nums.size()-1;row>=0;row--)
                cout<<nums[row][col]<<" ";
            
        }
    }
}


void wavePrintReverse(vector<vector<int>>&nums){
    for(int col=nums[0].size()-1;col>=0;col--){
        if(col % 2 == 0) {//even col->bottom
            for(int row=nums.size()-1;row>=0;row--)
                cout<<nums[row][col]<<" ";
        }
        else{//odd col-> top down
            for(int row=0;row<nums.size();row++)
                cout<<nums[row][col]<<" ";
        }
    }
}

 
int main()
{
    vector<vector<int>>v ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    // wavePrint(v);
    wavePrintReverse(v);
return 0;
}