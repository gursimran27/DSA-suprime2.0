#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


void conquere(vector<int>&nums,int l,int mid,int h){
    // 2 vector i.e left and right one from l->mid and mid+1->h in orignal array nums
    vector<int>temp(h-l+1);//* catch for size   
    // for(auto&x:nums){
    //     cout<<x<<" ";
    // }cout<<endl;    

    int i=l;
    int j=mid+1;
    int k=0;//for temp vector

    while(i<=mid and j<=h and k<temp.size()){
        if(nums[i]<nums[j]){
            temp[k]=nums[i];
            i++;
        }
        else{
            temp[k]=nums[j];
            j++;
        }
        k++;
    }


    // may some ele left in left subarray
    while(i<=mid){
        temp[k]=nums[i];
        i++;
        k++;
    }


    // may some ele  in left subarray
    while(j<=h){
        temp[k]=nums[j];
        j++;
        k++;
    }

    // add the temp vector to orignal vector
    for(int i=l,k=0;i<=h,k<temp.size();i++,k++){
        nums[i]=temp[k];
    }
}



void divide(vector<int>&nums,int l,int h){
    // base case
    if(l>=h)//array of 1 size is always sortd
        return;


    // ek case hum solve karrenge
    int mid=l+(h-l)/2;

    // bakki recursion sambal lega
    divide(nums,l,mid);  // left subarray
    divide(nums,mid+1,h);  // right subarray

    // merge 2 sortf array
    conquere(nums,l,mid,h);
}

 
int main()
{
    vector<int>v={5,4,9,1,2,6};

    divide(v,0,v.size()-1);//(array,low,high)

    for(auto&x:v)
        cout<<x<<" ";

    return 0;
}