#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        s+='$';int j=0;
        for(int i=0;i<t.length();i++)if(s[j]==t[i])j++;
        return s[j]=='$';
    }
};