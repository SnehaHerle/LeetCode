//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3338/

//Interval List Intersections

class Solution 
{
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) 
    {
        vector<vector<int>> intersection;
        vector<int> temp;
        int i = 0, j = 0;
        while(i<A.size() && j<B.size())
        {
            int lower = max(A[i][0],B[j][0]);   //lower bound of intersection
            int upper = min(A[i][1],B[j][1]);  //upper bound of intersection
            if(lower<=upper)  //then intersection
                intersection.push_back({lower,upper});   //{} -- that's how you initialise a vector! shit forgot.
            
            if(A[i][1] < B[j][1])  //then current i covered already moove to next i, else move to next j 
                i++;
            else
                j++;
        }
        return intersection;
    }
};
