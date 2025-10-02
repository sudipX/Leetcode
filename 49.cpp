#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(int i=0;i<strs.size();i++){
            string str=strs[i];
            sort(str.begin(),str.end());
            mpp[str].push_back(strs[i]); 
        }
        vector<vector<string>>vec;
        for(auto &mp:mpp)vec.push_back(mp.second);
        return vec;
    }
};