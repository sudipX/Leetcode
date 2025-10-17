#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>mpp;
        mpp[n]=1;int i;
        while(true){
            int ans=0;i=n;
            while(i){
                int k=i%10;
                ans+=k*k;
                i/=10;
            }
            n=ans;
            if(n==1)return true;
            else if(mpp[n])return false;
            else mpp[n]=1;
        }
        return false;
    }
};