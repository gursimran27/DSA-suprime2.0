#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

// int minimum(int arr[],int size,int mini,int index){
//     // base caase
//     if(index>=size) return mini;

//     mini=min(arr[index],mini);

//     int min=minimum(arr,size,mini,index+1);
//     return min;
// }
 
// int main()
// {
//     int arr[5]={1,2,3,2,-5};

//     cout<<minimum(arr,Size,INT_MAX,0);
//     return 0;
// }



                        //!OR


// void minimum(int arr[],int size,int *mini,int index){
//     // base caase
//     if(index>=size) return ;

//     *mini=min(arr[index],*mini);

//     minimum(arr,size,mini,index+1);
// }
 
// int main()
// {
//     int arr[5]={1,2,3,2,-5};
//     int mini=INT_MAX;
//     minimum(arr,Size,&mini,0);
//     cout<<mini;
//     return 0;
// }




                // !OR
// pass by referance -> int &mini in minimum() function


void minimum(int arr[],int size,int &mini,int index){
    // base caase
    if(index>=size) return;

    mini=min(arr[index],mini);

    minimum(arr,size,mini,index+1);
}
 
int main()
{
    int arr[5]={1,2,-63,2,-5};
    int mini=INT_MAX;
    minimum(arr,Size,mini,0);
    cout<<mini;
    return 0;
}