#include<bits/stdc++.h>
using namespace std;
# define rep(i,a,b) for(i=a;i<b;i++)
#define Size sizeof(arr)/sizeof(*arr)


 int minimumSubarrayLength(vector<int>& nums, int k) {
        if(k == 0) return 1;
        vector <int> sum(31 , 0);
        int c = 0 , n = nums.size();
        auto add = [&](int ind) {
            for(int i = 0;i<31;++i) {
                int x = 1<<i;
                if(x&nums[ind]) {
                    sum[i]++;
                    if(sum[i] == 1) c += x;
                }
            }
        };
        
        auto remove = [&](int ind) {
              for(int i = 0;i<31;++i) {
                int x = 1<<i;
                if(x&nums[ind]) {
                    sum[i]--;
                    if(sum[i] == 0) c -= x;
                }
            }
        };
        int j = 0 , ans = n + 1;
        for(int i = 0;i<n;++i) {
            while(j < n && c < k) {
                add(j);
                ++j;
            }
            if(c >= k) {
                
                ans = min(ans , j - i);
            }
            remove(i);
        }
        
        if(ans > n) ans = -1;
        return ans;
    }
 
int main()
{
        vector<int>v={1,2,32,21};
    // cout<<minimumSubarrayLength(v,0);
    // cout<<((2|5) & 5);
    cout<<minimumSubarrayLength(v,55);
return 0;
}