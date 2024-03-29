#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

// arrays are always passed by referance by default

void sort0sand1s(int arr[],int n){

    int countZeros =0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            countZeros++;
    }

    for(int i=0;i<n;i++){
        if(countZeros>0){
            arr[i]=0;
            countZeros--;
        }
        else
            arr[i]=1;    
    }

}

void sort0sand1smethod2(int arr[],int n){
    int p1=0;
    int p2=1;

    while(p2<n){
        if(arr[p1]==1 && arr[p2]==0){
            swap(arr[p1],arr[p2]);
            p1++;
        }
        if(arr[p1]==0)
            p1++;
        p2++;
    }
}
 
int main()
{
    int arr[]={0,1,1,1,0,0,0,1};
    int n=sizeof(arr)/sizeof(*arr);
    // sort0sand1s(arr,n);
    sort0sand1smethod2(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}