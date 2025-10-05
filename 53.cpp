#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0],midsum=nums[0],i=1;
        while(i<nums.size()){
            midsum=max(nums[i],midsum+nums[i]);
            sum=max(sum,midsum);
            i++;
        }
        return sum;
    }
};