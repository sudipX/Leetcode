#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(target>nums[n-1])return n;
        if(target<nums[0])return 0;
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target==nums[mid])return mid;
            else if(target<nums[mid])end=mid-1;
            else start=mid+1;
        }
        return start;
    }
};