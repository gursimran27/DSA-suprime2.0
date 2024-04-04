#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

// * question is that we are having an array , we just need to insert all the all the even elements from that array into a vector;


void func(int arr[],int size,int index,vector<int>&v){
    // base case 
    if(index>=size) return;

    if(arr[index]%2==0)
        v.push_back(arr[index]);

    func(arr,size,index+1,v);

}
 
int main()
{
    int arr[5]={10,11,12,13,14};
    vector<int>evenEle;
    func(arr,Size,0,evenEle);
    for(auto&x:evenEle)
        cout<<x<<" ";
    return 0;
}