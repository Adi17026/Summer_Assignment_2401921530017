#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string rev(string f){
        int n=f.size();
        string ans="";
        for(int i=n-1;i>=0;i--){
            ans+=f[i];
        }
        return ans;
    }
    string reverseWords(string s) {
        
        int n=s.size();
        string ans="";
        string a="";
        for(int i=0;i<n;i++){ 
            
           if(s[i]!=' '){
            a+=s[i];
           
           }
           else{
            ans+=rev(a);
            ans+=' ';
            a="";
           }
         
        }
        ans+=rev(a);
        return ans;
    }
};