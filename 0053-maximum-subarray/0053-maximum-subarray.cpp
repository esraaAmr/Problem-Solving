class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_current = nums[0];  // Initialize the current maximum subarray sum
        int max_global = nums[0];   // Initialize the global maximum subarray sum

        for (int i = 1; i < nums.size(); ++i) {
            max_current = max(nums[i], max_current + nums[i]);
            if (max_current > max_global) {
                max_global = max_current;
            }
        }

        return max_global;
    }
};
