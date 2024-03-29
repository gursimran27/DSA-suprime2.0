#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define size sizeof(arr)/sizeof(*arr)

void sortt(int nums[], int n){

        map<int , int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }

        int i=0;
        while(m[0]--){
            nums[i++]=0;
        }
        while(m[1]--){
            nums[i++]=1;
        }
        while(i<n)
            nums[i++]=2;
}
 
int main()
{
    int arr[]={1,2,0,1,0,2};
    sortt(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}