#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0){
            return "";
        }
        string prfx=strs[0];
        for(int i=1;i<n;i++){
            while(strs[i].find(prfx)!=0){
                prfx=prfx.substr(0,prfx.size()-1);
                if(prfx.empty()){
                    return "";
                }
            }
        }
        return prfx;
    }
};