#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currsum = 0;
        
        for (int i = 0; i < k; i++) {
            currsum += nums[i];
        }
        
        double maxsum = currsum;
        
        for (int i = k; i < nums.size(); i++) {
            currsum += nums[i] - nums[i - k];
            if (currsum > maxsum) {
                maxsum = currsum;
            }
        }
        
        return maxsum / k;
    }
};