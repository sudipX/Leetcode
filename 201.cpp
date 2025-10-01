#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans=0,k=1;
        while(left || right){
            if(left&1 && right&1)ans+=k;
            else if(left!=right)ans=0;
            k<<=1;left>>=1;right>>=1;
        }
        return ans;
    }
};