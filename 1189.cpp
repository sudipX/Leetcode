#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string s) {
        unordered_map<char,int>mpp={{'b',0},{'a',0},{'l',0},{'o',0},{'n',0}};
        for(int i=0;i<s.length();i++)if(mpp.find(s[i])!=mpp.end())mpp[s[i]]++;
        mpp['l']/=2;mpp['o']/=2;
        int ans=mpp['b'];
        for(auto &mp:mpp)ans=min(mp.second,ans);
        return ans;  
    }
};