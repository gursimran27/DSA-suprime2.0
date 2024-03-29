#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


bool isGettingNecessaryWoods(vector<long long int>&nums,long long int m,long long int sawBladeHeight){
    long long int woodGet=0;
    for(long long int i=0;i<nums.size();i++){
        if(nums[i]-sawBladeHeight>=0)
            woodGet+=(nums[i]-sawBladeHeight);
    }
    return (woodGet>=m);//as atleast m
}



long long int maxSawBladeHeight(vector<long long int>&nums,int m){
    long long int l=0;
    long long int h=*max_element(nums.begin(),nums.end());

    long long int ans=-1;
    long long int mid;

    while(l<=h){
        mid=l+(h-l)/2;

        if(isGettingNecessaryWoods(nums,m,mid)){
            ans=mid;
            l=mid+1;//as want to maximize
        }else
            h=mid-1;
    }
    return ans;
}
 
int main()
{
    long long int n,m;
    cin>>n>>m;

    vector<long long int>nums;
    while(n--){
        long long int height;
        cin>>height;
        nums.push_back(height);
    }
        cout<<maxSawBladeHeight(nums,m);
return 0;
}