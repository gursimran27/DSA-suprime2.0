#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)


// Approch 1->convert to binary
int countAllSetBitsMethod1(int n){
    int count=0;
    while(n>0){
        if(n%2==1)
            count++;
        n/=2;
    }
    return count;
}


// Approch 1->convert to binary
int countAllSetBitsMethod2(int n){
    int count=0;
    while(n>0){
        // get the LSB
        int LSB=n&1;
        if(LSB==1) count++;
        // right shift bits by one so that we can check next bit in next iteration
        n=n>>1;
    }
    return count;
}
 
int main()
{
    int n=10;
    cout<<countAllSetBitsMethod1(n)<<endl<<countAllSetBitsMethod2(n);
return 0;
}