#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>a(n);
        for(int i=0;i<n;i++){a[i].first=nums[i],a[i].second=i;}
        sort(a.begin(),a.end());
        int i=0,j=n-1;
        while(i<j){
            int sum=a[i].first+a[j].first;
            if(sum==target)return {a[i].second,a[j].second};
            else if(sum>target)j--;
            else i++;   
        }
        return nums;
    }
};
