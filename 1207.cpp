#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(int i=0;i<arr.size();i++)mpp[arr[i]]++;
        unordered_set<int>st;
        for(auto &x:mpp){
            if(st.count(x.second))return false;
            st.insert(x.second);
        }
        return true;
    }
};