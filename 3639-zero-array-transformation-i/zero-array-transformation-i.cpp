class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> diff(n + 1, 0); // One extra element to avoid out-of-bound for r+1

        //apply range updates using diff array
        for (auto& q : queries) {
            int l = q[0];
            int r = q[1];
            if (l >= n) continue;
            diff[l] += 1;
            if (r + 1 < n) {
                diff[r + 1] -= 1;
            }
        }

        // apply diff to the original array
        int decrement = 0;
        for (int i = 0; i < n; ++i) {
            decrement += diff[i];
            nums[i] = max(0, nums[i] - decrement);
        }

        // Check if all elements are zero
        for (int num : nums) {
            if (num != 0) return false;
        }
        return true;
    }
};
