#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int dist=0;
        while(x||y){
            dist+=x&1^y&1;
            x>>=1;y>>=1;
        }
        return dist;
    }
};