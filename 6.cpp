#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>rows(numRows);
        int n=s.length(),k=0;
        bool flag=true;
        if(numRows==1)return s;
        for(int i=0;i<n;i++){
            rows[k]+=s[i];
            if(flag)k++;else k--;
            if(k==0)flag=true;
            if(k==numRows-1)flag=false;
        }
        string str;
        for(int i=0;i<numRows;i++)str+=rows[i];
        return str;
    }
};