#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>smap,tmap;
        for(int i=0;i<s.length();i++){
            if(!(int)smap[s[i]])smap[s[i]]=t[i];
            if(!(int)tmap[t[i]])tmap[t[i]]=s[i];
            if(tmap[t[i]]!=s[i]||smap[s[i]]!=t[i])return false;           
        }
        return true;
    }
};