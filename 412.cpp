#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>vec;
        for(int i=1;i<=n;i++){
            if(i%3 && i%5)vec.push_back(to_string(i));
            else if(i%3)vec.push_back("Buzz");
            else if(i%5)vec.push_back("Fizz");
            else vec.push_back("FizzBuzz");
        }
        return vec;
    }
};