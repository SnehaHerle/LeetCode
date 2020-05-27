//https://www.youtube.com/watch?v=0ACfAqs8mm0&lc=z22fhxc52w3dx3gunacdp430ci5544kndya05mr5mixw03c010c

//Bipartite Graphs are 2 colorable, BFS to detect odd cycles.

//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3342/

//Possible Bipartition

class Solution 
{
    bool isBipartite(vector<vector<int>>& adj, int N, int node, vector<int>& color)
    {
        queue<int> q;
        q.push(node);
        color[node] = 1;
        
        while(!q.empty())  //Process current graph component using BFS
        {
            int curr = q.front();
            q.pop();
            for(int ele: adj[curr])
            {
                if(color[ele]==color[curr]) //Odd-cycle
                    return false;
                
                if(color[ele]==-1)  //Unvisited node
                {
                    color[ele] = 1-color[curr];
                    q.push(ele);
                }
            }
        }
        return true;
    }
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<vector<int>> adj(N+1);
        for(int i=0;i<dislikes.size();++i)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        
        vector<int> color(N+1,-1);
        
        for(int i=1;i<=N;++i)   //To check all the connected components.
            if(color[i]==-1)
                if(!isBipartite(adj,N,i,color))
                    return false;
        return true;
    }
};
