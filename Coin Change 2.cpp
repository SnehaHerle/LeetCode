//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3353/

//Coin Change 2

//Dynamic Programming

//O(coins.size() * amount)

class Solution 
{
public:
    int change(int amount, vector<int>& coins) 
    {
        int c = coins.size(), i, j;
        int dp[c+1][amount+1];
        
        for(i = 0 ; i < c+1 ; i++)
            for(j = 0 ; j < amount + 1 ; j++)
                dp[i][j] = 0;
        
        for(i = 0 ; i < c+1 ; i++)
            dp[i][0] = 1;
        
        for(i = 1 ; i < c + 1 ; i++)
        {
            for(j = 1 ; j < amount + 1 ; j++)
            {
                if(coins[i-1] <= j)
                    dp[i][j] = dp[i-1][j] + dp[i][j - coins[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[c][amount];
    }
};
