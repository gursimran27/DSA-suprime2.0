#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


double mySqrt(int x, int precision) {

        int l=0;
        int h=x;
        double ans;

        long long int mid;

        while(l<=h){
            mid=l+(h-l)/2;

            if(mid*mid==x)
                return mid;
            else if(mid*mid>x)
                h=mid-1;
            else if(mid*mid<x){
                ans=mid;
                l=mid+1;
            }
        }

        double increment=0.1;
        for(int i=1;i<=precision;i++){
            while(ans*ans<=x){
                ans+=increment;
            }
            ans-=increment;//as while break when increment is added
            increment=increment/10;
        }
        return ans;
    }
 
int main()
{
    cout<<mySqrt(68,2);
return 0;
}