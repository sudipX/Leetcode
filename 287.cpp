#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=nums[i];
            while(x!=i+1 && nums[x-1]!=x){
                swap(nums[x-1],nums[i]);
                x=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1)return nums[i];
        }
        return 1;
    }
};