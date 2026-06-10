#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength=0;
        int left=0;
        unordered_set<char>us;
        for(int right=0;right<s.size();right++){
            if(us.count(s[right])==0){
            us.insert(s[right]);
            maxlength=max(maxlength,right-left+1);
            }else{
               while(us.count(s[right])){
                us.erase(s[left]);
                left++;
               } 
               us.insert(s[right]);
            }
        }
        return maxlength;
    }
};
