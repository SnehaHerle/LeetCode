// https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3373/

// Perfect Squares

// Dynamic Programming.

// Time Complexity - O(N^2)

class Solution 
{
public:
    int numSquares(int n) 
    {
	    vector<int> dp(n+1, INT_MAX);   //dp[i] will store the least number of squqres required to form i.
	    dp[0] = 0;
        
	    for (int i = 1; i <= n; i++) 
        {
		    for (int j = 1; j*j <= i; j++) 
            {
			    dp[i] = min(dp[i], 1 + dp[i-j*j]);
		    }
	    }
        
	    return dp[n];
    }
};
