//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/538/week-5-may-29th-may-31st/3345/

//K Closest Points to Origin

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) 
    {
        priority_queue<pair<int, int>,vector<pair<int,int>> ,greater<pair<int,int>> > pq;
        vector<vector<int>> ans;
    
        
        for( int i = 0 ; i < points.size() ; i++ )
        {
            int temp = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            pq.push(make_pair(temp, i));
        }
        while(K)
        {
            ans.push_back(points[pq.top().second]);
            pq.pop();
            K--;
        }
        return ans;
    }
};
