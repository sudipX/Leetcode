#include<bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int>pref;
    NumArray(vector<int>& nums) {
        int num=0;pref.push_back(num);
        for(int i=0;i<nums.size();i++){
            num+=nums[i];pref.push_back(num);
        }
    }
    
    int sumRange(int left, int right) {
        return pref[right+1]-pref[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */