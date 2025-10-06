#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>mpp,mp;
        for(int x:nums)mpp[x]++;
        for(int n:nums){
            if(mpp[n]==0)continue;
            if(mp[n]>0){mp[n]--,mpp[n]--;mp[n+1]++;}
            else if(mpp[n]>0 && mpp[n+1]>0 && mpp[n+2]>0){
                mpp[n]--;mpp[n+1]--;mpp[n+2]--;mp[n+3]++;
            }
            else return false;
        }
        return true;
    }
};