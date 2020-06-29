//https://leetcode.com/problems/reconstruct-itinerary/discuss/709922/cpp-solution-easy-to-understand-oror-using-dfs-graph

//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3374/

//Reconstruct Itinerary

//Graph, DFS on the graph.


class Solution {
public:
    void find(map<string,vector<string>> &adj, string curr, vector<string> &res)
    {    
        for(int i = 0 ; i < adj[curr].size() ; i++)
        {
            string x = adj[curr][i];
            adj[curr].erase(adj[curr].begin()+i);
            i--;
            find(adj, x, res);
        }
        res.push_back(curr);
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) 
    {
        vector<string> res;
        int l = tickets.size();
        map<string,vector<string>> adj; 
        
        for(int i = 0 ; i < l ; i++)
            adj[tickets[i][0]].push_back(tickets[i][1]); //we created an adjacency list here.
        
        for(auto x = adj.begin() ; x != adj.end() ; x++)
          sort(x->second.begin(),x->second.end());  //now sort the elements in the adjacency list.
        
        find(adj, "JFK", res);
        reverse(res.begin(),res.end());
        return res;
    }
};
