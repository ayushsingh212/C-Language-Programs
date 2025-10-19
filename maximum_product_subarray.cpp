#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0], currMax = nums[0], currMin = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) swap(currMax, currMin);
            currMax = max(nums[i], currMax * nums[i]);
            currMin = min(nums[i], currMin * nums[i]);
            res = max(res, currMax);
        }
        return res;
    }
};

int main() {
    vector<int> nums = {2,3,-2,4};
    Solution s;
    cout << s.maxProduct(nums);
}
