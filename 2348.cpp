#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){count++;ans+=count;}
            else count=0;
        }
        return ans;
    }
};