#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string str="";
        int n=s.length(),i=0;
        while(i<n){
            string apt="";
            while(s[i]!=' ' && i<n){apt+=s[i];i++;}
            while(s[i]==' ' && i<n)i++;
            reverse(apt.begin(),apt.end());
            if(apt.length() && i<n)str+=apt+' ';
            else str+=apt;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};