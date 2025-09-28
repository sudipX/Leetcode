#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++)
            if (isalnum(static_cast<unsigned char>(s[i]))) {
                str+=static_cast<char>(tolower(static_cast<unsigned char>(s[i])));
            }
        string rev=str;
        reverse(rev.begin(),rev.end());
        return rev==str;
    }
};