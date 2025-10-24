#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>n=nums;
        unordered_map<int,int>mpp;
        sort(n.begin(),n.end());
        n.push_back(-1);
        int count=0,k=1;
        for(int i=0;i<nums.size();i++){
            if(n[i]!=n[i+1]){
                mpp[n[i]]=count;
                count+=k;k=1;}
            else k++;
        }
        for(int i=0;i<nums.size();i++)nums[i]=mpp[nums[i]];
        return nums;
    }
};