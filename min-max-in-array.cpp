#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)


void minMaxInArray(int arr[], int n){
    int minAns=INT_MAX;
    int maxAns=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]<minAns)
            minAns=arr[i];
        maxAns=max(arr[i],maxAns);
    }
    cout<<"min "<<minAns<<endl<<"max "<<maxAns;
}
 
int main()
{
    int arr[5]={1,-1,0,10,11};
    minMaxInArray(arr,5);
return 0;
}