// Given a number N and a value K. From the right, set the Kth bit in the binary representation of N. The position of Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on. 

// Example 1:

// Input:
// N = 10 
// K = 2
// Output:
// 14
// Explanation:
// Binary representation of the given number
// 10 is: 1 0 1 0, number of bits in the 
// binary reprsentation is 4. Thus 2nd bit
// from right is 0. The number after changing
// this bit to 1 is: 14(1 1 1 0).


#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)

int setKthBit(int N, int K)
    {
        // Write Your Code here
        int mask= (1<<K);
        return (N|mask);
    }
 
int main()
{
    cout<<setKthBit(10,2);
return 0;
}