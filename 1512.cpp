#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       unordered_map<int,int>mpp;
       for(int i=0;i<nums.size();i++)mpp[nums[i]]++;
       int ans=0;
       for(auto &mp:mpp)ans+=(mp.second*(mp.second-1)/2);
       return ans; 
    }
};