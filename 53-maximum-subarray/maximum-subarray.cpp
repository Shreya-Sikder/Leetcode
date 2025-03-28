class Solution {
public:
int maxCrossingSum(vector<int> &nums, int l, int m, int h)
{
    int sum = 0;
    int leftSum = INT_MIN;
    for (int i = m; i >= l; i--)
    {
        sum = sum + nums[i];
        if (sum > leftSum)
            leftSum = sum;
    }
    sum = 0;
    int rightSum = INT_MIN;
    for (int i = m + 1; i <= h; i++)
    {
        sum = sum + nums[i];
        if (sum > rightSum)
            rightSum = sum;
    }

    return (leftSum + rightSum);
}

int MaxSum(vector<int> &nums, int l, int h)
{

    if (l > h)
        return INT_MIN;

    if (l == h)
        return nums[l];

    int m = l + (h - l) / 2;

   
    int leftSum = MaxSum(nums, l, m);
    int rightSum = MaxSum(nums, m + 1, h);
    int crossSum = maxCrossingSum(nums, l, m, h);

  
    if (leftSum >= rightSum && leftSum >= crossSum)
        return leftSum;
    else if (rightSum >= leftSum && rightSum >= crossSum)
        return rightSum;
    else
        return crossSum;
}
    int maxSubArray(vector<int>& nums) {
       int n=nums.size();
     return MaxSum(nums,0,n-1);
    }
};
