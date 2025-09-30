#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_length=INT_MAX,n=strs.size();
        for(int i=0;i<n;i++){
            int length=strs[i].length();
            min_length=min(min_length,length);}
        string s="";
        for(int i=0;i<min_length;i++){
            char ch=strs[0][i];bool flag=true;
            for(int j=0;j<n;j++)if(strs[j][i]!=ch)flag=false;
            if(flag)s+=ch;
            else break;
        }
        return s;
    }
};