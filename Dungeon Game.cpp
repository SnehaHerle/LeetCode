// Dynamic Programming.

// O((N^2)

// https://leetcode.com/explore/featured/card/june-leetcoding-challenge/541/week-3-june-15th-june-21st/3367/

// Dungeon Game

class Solution 
{
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) 
    {
        if (dungeon.empty() || dungeon[0].empty()) // invalid input
            return 0;  
        
        int rows = dungeon.size(), cols = dungeon[0].size();
        
        vector<vector<int>> dpVector(rows, vector<int>(cols, 0));  // initialise the dp vector to 0
        
        for (int i=rows-1; i >= 0; --i)   // dp[i][j] denotes the min loss incurred from i,j to rows-1,cols-1
        {
            for (int j=cols-1; j >= 0; --j)   // starting from the princess' position
            {
                if (i == rows - 1 && j == cols - 1)   // princess' position
                {
                    dpVector[i][j] = min(0, dungeon[i][j]);
                }
                else if (i == rows - 1) // last row, so only option is to move right
                {
                    dpVector[i][j] = min(0, dungeon[i][j] + dpVector[i][j+1]);
                }
                else if (j == cols - 1) // last column, so only option is to move down
                {
                    dpVector[i][j] = min(0, dungeon[i][j] + dpVector[i+1][j]);
                }
                else  // in the mid, so check for both right and down options
                {
                    dpVector[i][j] = min(0, dungeon[i][j] + max(dpVector[i][j+1], dpVector[i+1][j]));
                }
            }
        }
        return -dpVector[0][0] + 1;
    }
};
