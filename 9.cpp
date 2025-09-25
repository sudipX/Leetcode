#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long long s=x,m=0;
        if(x<0)return false;
        while (s){
            m*=10;
            m+=s%10;
            s/=10;
        }
        return m==x;
    }
};
