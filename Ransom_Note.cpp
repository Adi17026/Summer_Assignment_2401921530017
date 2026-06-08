#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int >umag;
        for(char c: magazine){
            umag[c]++;
        }
        for(char x: ransomNote ){
           if(umag[x]<=0){
            return false;
           }
           umag[x]--;
        }
        return true;
    }
};