#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(*arr);

    // !approch-1
    // int left=0;
    // int right=size-1;
    // while(left < right){
    //     swap(arr[left],arr[right]);
    //     left++;
    //     right--;
    // }

    // !approch-2
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-i-1]);
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}