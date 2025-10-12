#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSplits(string s) {
        int n=s.length();
        unordered_set<char>s1,s2;
        vector<int>pref(n,0),suff(n,0);
        for(int i=0;i<n;i++){
            s1.insert(s[i]);s2.insert(s[n-i-1]);
            pref[i]=s1.size();suff[n-i-1]=s2.size();
        }
        int total=0;
        for(int i=0;i<n-1;i++){
            if(pref[i]==suff[i+1])total++;
        }
        return total;     
    }
};