//https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3349/

//Two City Scheduling

//O(NlogN)


class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        int sum = 0, sum1 = 0;
        sort(
            costs.begin(), 
            costs.end(), 
            [&](vector<int> a, vector<int> b)
            {
            if(a[0] - a[1] <= b[0] - b[1])       //trying to sort in the decreasing order of difference between costs[i][0] and costs[i][1]
                return true;
            return false;
            }
            );
        for(int i = 0 ; i < costs.size(); i++)
            cout<<costs[i][0]<<" "<<costs[i][1]<<" ";
        cout<<endl;
        for(int i = 0 ; i < costs.size()/2 ; i++)
        {
            //cout<<costs[i][0]<<" = sum ";
            sum += costs[i][0];
            //cout<<sum<<" = final ";
        }
            
        //cout<<sum;
        for(int i = costs.size()/2 ; i<costs.size() ; i++)
            sum += costs[i][1];
        //cout<<sum;
        
        
            return sum;
    }
};

