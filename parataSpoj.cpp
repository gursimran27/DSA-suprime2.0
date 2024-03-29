#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

bool isPossibleSol(vector<int>&nums,int parata,int mid){
    int cooks=0;
    int time=0;
    int i=1;//track number of paratha

    while(parata){
        time+=nums[cooks]*i;
        if(time>mid){
            cooks++;
            i=1;
            time=0;
            if(cooks>=nums.size())   return 0;
            time=nums[cooks]*i;
        }
        parata--;
        i++;
    }
    return 1;
}


int minTimeToCompleteOrder(vector<int>&nums,int parata){
    sort(nums.begin(),nums.end());

    int l=0;
    int h= nums.back()*(parata*(parata+1)/2);
    int ans=-1;
    int mid;

    while(l<=h){
        mid=l+(h-l)/2;
        cout<<"mid "<<mid;

        if(isPossibleSol(nums,parata,mid)){
            ans=mid;
            h=mid-1;
        }else
            l=mid+1;
        cout<<"ans "<<ans<<endl;
    }
    return ans;
}


int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--){
        int parata,cooks;
        cin>>parata>>cooks;
        vector<int>cooksRank;
        while(cooks--){
            int rank;
            cin>>rank;
            cooksRank.push_back(rank);  
        }
        cout<<minTimeToCompleteOrder(cooksRank,parata)<<endl;
    }
return 0;
}