class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        if (nums.size() == 1) return -1;
        
        int maxm = -1; // default to -1 for "no valid pair"

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) { // start j = i + 1
                if (nums[j] > nums[i]) {
                    int diff = nums[j] - nums[i];
                    maxm = max(maxm, diff);
                }
            }
        }

        return maxm;
    }
};
