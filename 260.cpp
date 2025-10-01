#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long x=0;
        for(int i=0;i<nums.size();i++)x^=nums[i];
        long right=x&(-x);
        int first=0,second=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&right)first^=nums[i];
            else second^=nums[i];
        }
        return {first,second};
    }
};