#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

void rightShiftByK(int arr[],int n,int k){
    int temp[k];
    int j=0;
    for(int i=n-1;i>=n-k;i--)
        temp[j++]=arr[i];


    int i;
    for( i=n-1;i>=k;i--)
        arr[i]=arr[i-k];
    j=0;
    for(int k=i;k>=0;k--){
        arr[k]=temp[j++];
    }


}

 void rotate(vector<int>& nums, int k) {
        // approch 1-><using temp array O(n) space O(n)
        vector<int>temp(k);
        int n=nums.size();
        for(int i=n-1;i>=n-k;i--){
            temp[(n-1)-(i)]=nums[i];
        }

        int i;
        for( i=n-1;i>=k;i--){
            nums[i]=nums[i-k];
        }
        
        while(i>=0){
            nums[i]=temp[k-(i+1)];
            i--;
        }
    }
 
int main()
{
    // int arr[]={10,20,30,40,50};

    // rightShiftByK(arr,Size,3);

    // for(int i=0;i<Size;i++)
    //     cout<<arr[i]<<" ";


    vector<int>v={-1};
    rotate(v,2);
    for (auto &x : v) std::cout << x << ' ';

return 0;
}