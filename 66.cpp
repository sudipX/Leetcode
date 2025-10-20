#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        bool flag=true;
        for(int i=0;i<digits.size();i++){
            if(flag){
                digits[i]++;
                if(digits[i]==10)digits[i]=0;
                else flag=false;
            }
        }
        if(flag)digits.push_back(1);
        reverse(digits.begin(),digits.end());
        return digits;
    }
};