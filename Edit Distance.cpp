//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/538/week-5-may-29th-may-31st/3346/

//Edit Distance

//Dynamic Programming

//Space O(M), Time O(M*N)

class Solution {
public:
    int minDistance(string word1, string word2) 
    {
        int i = 0, j = 0, m = word1.length(), n = word2.length(), dp[2][n+1];
        
        for( i = 0 ; i <= m ; i++ )
        {
            for( j = 0 ; j <= n ; j++ )
            {
                if( i == 0 )
                    dp[i][j] = j;
                
                else if( j == 0 )
                    dp[i%2][j] = i;
                
                else if(word1[i-1] == word2[j-1])
                    dp[i%2][j] = dp[(i-1)%2][j-1];
                
                else
                    dp[i%2][j] = 1 + (min(dp[(i-1)%2][j], min(dp[(i-1)%2][j-1], dp[i%2][j-1])));
                
                cout<< dp[i%2][j] << " ";
            }
            cout<<endl;
            
        }
        return dp[m%2][n];
    }
};
