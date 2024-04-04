#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


// method 1->linear search from left to right or from right to left O(n)
// method 2->binary search O(logn)
// method 3->STL strrchr(string, char)


void func1(string s,int index,char target,int &ans){
    // base case
    if(index>=s.size()) return;

    if(s[index]==target)
        ans=index;

    func1(s,index+1,target,ans);
    
}


int func2(string s,int index,char target){
    // base case 
    if(index<0) return -1;

    if(s[index]==target)
        return index;

    int i=func2(s,index-1,target);
    return i;
}

 
int main()
{
    // char c[]="hello dell";
    // char *ptr=strrchr(c,'e');//this func does't work with strings
    // cout<<ptr<<" "<<*ptr;


    // // * using recursion method-1 left to right
    // string str="hello dell";
    // int ans=-1;
    // func1(str,0,'e',ans);
    // cout<<ans;



    // * using recursion method-2 right to left
    string str="hello dell";
    cout<<func2(str,str.size()-1,'e');

    return 0;
}