//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3383/

class Solution 
{
public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int perimeter = 0;
        for (int i = 0; i < grid.size(); i++) 
        {
            for (int j = 0; j < grid[0].size(); j++) 
            {
                if (grid[i][j] == 1) {
                    perimeter += 4;
                    if (i < grid.size() - 1) perimeter -= 2 * grid[i + 1][j];
                    if (j < grid[0].size() - 1) perimeter -= 2 * grid[i][j + 1];
                }
            }
        }

        return perimeter;
    }
};
