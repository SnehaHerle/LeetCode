// https://www.youtube.com/watch?v=FO7VXDfS8Gk&t=943s

// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3336/

// Count Square Submatrices with All Ones

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int result = 0;
        
        for(int i = 0; i<matrix.size(); i++)
        {
            for(int j = 0; j<matrix[0].size(); j++)
            {
                if(i > 0 && j > 0 && matrix[i][j]>0)
                    matrix[i][j] = min(matrix[i-1][j-1], min(matrix[i-1][j], matrix[i][j-1])) + 1;
                
                result += matrix[i][j];
            }
        }
        
        return result;
    }
};
