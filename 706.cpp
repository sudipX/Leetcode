#include<bits/stdc++.h>
using namespace std;

class MyHashMap {
    unordered_map<int,int>mpp;
public:
    MyHashMap() {
    }
    
    void put(int key, int value) {
        if(value == 0)mpp[key]=-1;
        else mpp[key]=value;
    }
    
    int get(int key) {
        if(mpp[key]==-1)return 0;
        else if(mpp[key])return mpp[key];
        return -1;
    }
    
    void remove(int key) {
        mpp[key]=0;
    }
};