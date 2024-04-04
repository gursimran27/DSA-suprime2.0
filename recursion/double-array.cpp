#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

void func(int arr[],int size,int index){
    if(index>=size) return;

    arr[index]*=2;//*note arrays are default passed by reference

    func(arr,size,index+1);
}
 
int main()
{
    int arr[5]={10,20,30,40,50};

    func(arr,Size,0);

    for(int i=0;i<Size;i++)
        cout<<i[arr]<<" ";
    return 0;
}