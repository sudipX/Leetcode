#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int n=1,sum=0;
        while(num){
            if(!(num&1))sum+=n;
            n<<=1;num>>=1;
        }
        return sum;
    }
};