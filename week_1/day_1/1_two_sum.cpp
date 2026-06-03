#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>um;
        for (int i = 0; i < nums.size(); i++) {
            int b = target - nums[i];
            if (um.find(b) !=um.end()) {
               
                return {um[b], i};
            }
            um[nums[i]] = i;
        }
        
        return {};
    }
};