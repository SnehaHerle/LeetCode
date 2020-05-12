class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int oldColor = image[sr][sc];
        
        int M = image.size();
        int N = image[0].size();
        
        cout<<M<<" "<<N;
        
        floodFillRec(image, sr, sc, newColor, oldColor);
        
        return image;
    }
    
    void floodFillRec(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor)
    {
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size())
            return;
        
        if(image[sr][sc] != oldColor)
            return;
        
        if(image[sr][sc] == newColor)
            return;
        
        image[sr][sc] = newColor;
        
        floodFillRec(image, sr-1, sc, newColor, oldColor);
        floodFillRec(image, sr, sc+1, newColor, oldColor);
        floodFillRec(image, sr+1, sc, newColor, oldColor);
        floodFillRec(image, sr, sc-1, newColor, oldColor);
    }
};

// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/

// Flood Fill
