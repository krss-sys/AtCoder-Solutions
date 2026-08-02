#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() <= 1) {
            return false;
        }
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < (int)nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }
};