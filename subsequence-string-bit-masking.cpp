#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)

// !there is also a recursive approch see in recursion folder

// !simillar to LC-78 subsets

void subsequenceUsingBitMasking(string&s){
    vector<string>nums;

    int num_subseq=pow(2,s.size());

    for(int n=0;n<num_subseq;n++){//O(2^n)
        string temp="";
        int num=n;
        int i=0;//for string s
        // now generate the bits
        while(num){//O(n)
            int LSB=(num&1);
            if(LSB==1 and i<s.size())
                temp.push_back(s[i]);
            
            i++;
            num=num>>1;//right  shift
        }
        nums.push_back(temp);
    }
    for(auto&x:nums){
        if(x=="")   
            cout<<"@"<<endl;
        else
            cout<<x<<" "<<endl;
    }
}
 
int main()
{
    // O(n*2^n)
    string s="abc";
    subsequenceUsingBitMasking(s);
    return 0;
}