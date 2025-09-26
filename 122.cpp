#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum=prices[0],minimum=prices[0],profit=0,n=prices.size();
        for(int i=0;i<n-1;i++){
            minimum=min(minimum,prices[i]);
            if(prices[i]<prices[i+1]){
                maximum=prices[i+1];
                profit+=(maximum-minimum);
                minimum=prices[i+1];
        }
    }
    return profit;
    }
};