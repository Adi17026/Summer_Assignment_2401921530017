#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(int n, int open,int close,string curr, vector<string>& s){
        if(curr.size()==2*n){
            s.push_back(curr);
            return;
        }
        if(open<n){
            helper(n,open+1,close,curr+'(',s);
        }
        if(open>close){
            helper(n,open,close+1,curr+')',s);
        }
    }
    vector<string> generateParenthesis(int n) {
       string ans="";
        vector<string>res;
        
        helper(n,0,0,ans,res);
        return res;
    }
};