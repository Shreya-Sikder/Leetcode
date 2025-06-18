class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minp=prices[0];
        vector<int>dp(n,0);
        if(n==0) return 0;
        for(int i=1;i<n;i++){
            dp[i]=max(dp[i-1],prices[i]-minp);
            minp=min(minp,prices[i]);
        }
        return dp[n-1];
    }
};