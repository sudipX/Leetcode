#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n+1,0),suff(n+1,0);
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+nums[i];
            suff[n-i-1]=suff[n-i]+nums[n-i-1];
        }
        for(int i=0;i<n;i++)if(pref[i]==suff[i+1])return i;
        return -1;
    }
};