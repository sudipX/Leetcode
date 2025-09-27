#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int value=0,n=s.length();
        map<char,int>mpp;
        mpp['I']=1;mpp['V']=5;mpp['X']=10;mpp['L']=50;
        mpp['C']=100,mpp['D']=500;mpp['M']=1000;
        for(int i=0;i<n-1;i++){
            if(s[i]=='I')value+=(s[i+1]!='V' && s[i+1]!='X'?mpp[s[i]]:-mpp[s[i]]);
            else if(s[i]=='X')value+=(s[i+1]!='L' && s[i+1]!='C'?mpp[s[i]]:-mpp[s[i]]);
            else if(s[i]=='C')value+=(s[i+1]!='D' && s[i+1]!='M'?mpp[s[i]]:-mpp[s[i]]);
            else value+=mpp[s[i]];
        }
        value+=mpp[s[n-1]];
        return value;
    }
};