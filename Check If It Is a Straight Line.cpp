class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        if(coordinates.size() <= 2)
            return true;
        
        //This is how you access elements of a vector.
        int x1 = coordinates[0][0], y1 = coordinates[0][1], x2 = coordinates[1][0], y2 = coordinates[1][1],
        i, x, y;
        
        for(i=2;i<coordinates.size();i++)
        {
            x = coordinates[i][0];
            y = coordinates[i][1];
            
            /*  x2-x1        x - x1
               --------  =  ---------
                y2-y1        y - y1       
                
                If this is true, then the points are in line, else they are not. */
            
            if((y2 - y1) * (x1 - x) != (y1 - y) * (x2 - x1))
                return false;
        }
        
        return true;
        
    }
};

//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/

//Check If It Is a Straight Line
