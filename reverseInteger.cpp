// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.


#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

int reverse(int x) {
        if(x<=INT_MIN || x>=INT_MAX){
            return 0;
        }
        // if x is -ve
        bool isNegative=false;
        if(x<0){
            isNegative=true;
            x=-x;
        }        
        int ans=0; int rem=0;
        while(x>0){
            if(ans>INT_MAX/10)
                return 0;
            rem=x%10;
            ans=ans*10+rem;
            x=x/10;
        } 
        return isNegative? -ans:ans
        ;   
    }
 
int main()
{
cout<<reverse(73);
return 0;
}