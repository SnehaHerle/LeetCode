// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/

// Find the Town Judge

// Directed Graph



/* Logic:
If in the directed graph of trust - 
1. Vertex Z has no outgoing edges (Means that vertex does not trsyt anyone)
2. Vertex Z has exactly N-1 incoming edges (Means all except himself, trust him)
If both 1&2 are satisfied for a vertex, then that is the answer.
*/


class Solution 
{
public:
    int findJudge(int N, vector<vector<int>>& trust) 
    {
        int adj_mat[1001][1001] = {0}, incoming = 0, outgoing = 0, size = trust.size(), 
        v1 = 0, v2 = 0, flag = 0;
        
        for(int i = 0 ; i < size ; i++)  //create adjacency matrix for the directed graph
        {
            v1 = trust[i][0];
            v2 = trust[i][1];
            adj_mat[v1][v2] = 1;
        }
        
        for(int i = 1 ; i <= N ; i++ )
        {
            incoming = 0;
            outgoing = 0;
            flag = 0;
            
            for(int j = 1 ; j <= N ; j++ )  //check if there are outgoing edges.
            {
                if(adj_mat[i][j] != 0)
                {
                    flag = 1;
                    break;
                }
            }
            
            if(flag == 0)
            {
                for(int k = 1; k <= N ; k++ )  //if there are no outgoing edges, then check for incoming.
                {
                    if(adj_mat[k][i] == 1)
                        incoming++;
                }
                if(incoming == N-1)  //if incoming edges = N-1, then that vertex is our town judge.
                {
                    return i;
                }
            }
        }
        
        return -1;
    }
};                                                                                                                              
