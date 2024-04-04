#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

// print a particular term of fibbonacci series

int fibo(int n){
    if(n==1 or n==0){
        return n;
    }

    int ans=fibo(n-1)+fibo(n-2);

    return ans;
}

void printFibonacciSeries(int n){

    if(n<0) return;
    printFibonacciSeries(n-1);
    cout<<fibo(n)<<" ";
}
 
int main()
{
    printFibonacciSeries(8);
    return 0;
}