#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxarea=0;
        int maxheight;
        while(i<j){
            maxheight=min(height[i],height[j]);
            maxarea=(j-i)*maxheight;
            i++;
        }
        return maxarea;
    }
    
};