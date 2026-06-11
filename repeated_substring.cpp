#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        int half=n/2;
        string doubled= s+s;
        string i= doubled.substr(1,doubled.size()-2);
        return i.find(s)!=string::npos;
    }
};