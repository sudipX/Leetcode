#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,total=0;
        while(i<j){
            total=max(total,min(height[i],height[j])*(j-i));
            if(height[j]<height[i])j--;else i++;
            
        }
        return total;
    }
};