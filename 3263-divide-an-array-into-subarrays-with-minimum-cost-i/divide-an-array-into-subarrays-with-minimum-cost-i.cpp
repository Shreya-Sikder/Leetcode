class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int minCost = INT_MAX;

        for (int i = 1; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int cost = nums[0] + nums[i] + nums[j];
                minCost = min(minCost, cost);
            }
        }

        return minCost;
    }
};
