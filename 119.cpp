#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        for(int i=0;i<rowIndex+1;i++){
            vector<int>vec;
            for(int j=0;j<=i;j++){
                if(j==0)vec.push_back(1);
                else if(j==i)vec.push_back(1);
                else vec.push_back(ans[j-1]+ans[j]);
            }
            ans=vec;
        }
        return ans;
    }
};