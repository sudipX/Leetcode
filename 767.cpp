#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    struct compare{
        bool operator()(pair<int,char>a,pair<int,char>b){
            return a.first<b.first;
        }
    };

    string reorganizeString(string s) {
        priority_queue<pair<int,char>,vector<pair<int,char>>,compare>pq;
        int n=s.length();
        string ans;

        int freq[26]={0};
        for(auto &ch:s){
            freq[ch-'a']++;
            if(freq[ch-'a']>(n+1)/2)return "";
        }

        for(char ch='a';ch<='z';ch++){
            if(freq[ch-'a']){
                pair<int,char>p={freq[ch-'a'],ch};
                pq.push(p);
            }
        }

        while(pq.size()>1){
            pair<int,char>p1=pq.top();
            pq.pop();
            pair<int,char>p2=pq.top();
            pq.pop();
            ans.push_back(p1.second);
            ans.push_back(p2.second);

            p1.first--;p2.first--;
            if(p1.first)pq.push(p1);
            if(p2.first)pq.push(p2);       
        }
        if(!pq.empty()){
            ans.push_back(pq.top().second);
        }
        return ans;      
    }
};