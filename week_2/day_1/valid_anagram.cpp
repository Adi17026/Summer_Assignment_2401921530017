#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        string sorted_s=s;
        string sorted_t=t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s!=t){
            return false;
        }
        else{return true;}
    }
};