#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int spointer=0;
        int tpointer=0;
        int count=0;
        while(s.size()>spointer && t.size()>tpointer){
            if(s[spointer]==t[tpointer]){
                count++;
                spointer++;
             

            }
            tpointer++;
        }
        return count==s.size();
    }
};