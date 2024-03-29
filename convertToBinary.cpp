#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

int convertToBinary1(int n){
    // using divission method
    int binary = 0;
    int i=0;
    while(n>=1){
        int rem = n%2;
        binary += rem*pow(10,i++);
        n=n/2;
    }
    return binary;
}



int convertToBinary2(int n){
    // using bitwise method
    int binary = 0;
    int i=0;
    while(n>0){
        int bit = n & 1; //get the LSB
        binary += bit*pow(10,i++);
        n=n>>1; //right shift so that the second last bit can come to LSB place
    }
    return binary;
}
 
int main()
{
    int a;
    cin>>a;
    // cout<<convertToBinary1(a);    
    cout<<convertToBinary2(a);    
return 0;
}