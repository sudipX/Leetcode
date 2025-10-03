#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int ans=1,curr=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])continue;
            else if(nums[i]==nums[i-1]+1)curr++;
            else{ans=max(curr,ans);curr=1;}
        }
        ans=max(curr,ans);
        return ans;
    }
};