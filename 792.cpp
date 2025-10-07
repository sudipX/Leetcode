#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=s.length();
        unordered_map<char,vector<int>>mp;
        for(int i=0;i<n;i++)mp[s[i]].push_back(i);
        int count=0;
        for(auto word:words){
            bool isMatch=true;
            int lastPos=-1;
            for(auto ch:word){
                if(mp.find(ch)==mp.end()){isMatch=false;break;}
                auto itr=upper_bound(mp[ch].begin(),mp[ch].end(),lastPos);
                if(itr==mp[ch].end()){isMatch=false;break;}
                lastPos=*itr;
            }
            if(isMatch)count++;
        }
        return count;
    }
};