class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int size = coins.size();
        sort(coins.begin(),coins.end());
        vector<int> dp(amount+1,INT_MAX);
        dp[0] = 0;
        for(int a=0;a<=amount;a++)
        {
            for(int i=0;i<size;i++)
            {
                if(a>=coins[i] && dp[a-coins[i]]!=-1){
                       dp[a] = min(dp[a], (1+dp[a-coins[i]]));
                    }
            }
            if(dp[a]==INT_MAX) dp[a]=-1;

        }
        return dp[amount];
    }
};