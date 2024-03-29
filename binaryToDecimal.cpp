#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
 
int convertToDecimal(int binary){
    int decimal = 0;
    int i=0;

    while(binary!=0){
        int lastBit=binary%10;
        decimal+=lastBit*pow(2,i++);
        binary/=10;
    }
    return decimal;
}

int main()
{
     while(true){
        int a;
        cin>>a;
        cout<<convertToDecimal(a)<<endl;
     }
return 0;
}