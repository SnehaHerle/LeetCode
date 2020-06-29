//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/543/week-5-june-29th-june-30th/3375/

//Unique Paths

//Dynamic Programming - O(m*n)

//Number of ways to reach [i][j] = Number of ways to reach [i][j-1] and Number of ways to reach [i-1][j]


class Solution 
{
public:
    int uniquePaths(int m, int n) 
    {
        int dp[101][101];
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m ; j++)
                dp[i][j] = 1;
        
        for(int i = 1; i < n ; i++)
            for(int j = 1; j < m ; j++)
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m ; j++)
                cout<<dp[i][j]<<" ";
        
        return dp[n-1][m-1];
    }
};
