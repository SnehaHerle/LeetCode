//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3340/

//Uncrossed Lines

int lcs(vector<int>& X, vector<int>& Y, int m, int n )  
{  
    int L[m + 1][n + 1];  
    int i, j;  

    for (i = 0; i <= m; i++)  
    {  
        for (j = 0; j <= n; j++)  
        {  
            if (i == 0 || j == 0)  
                L[i][j] = 0;  
      
            else if (X[i - 1] == Y[j - 1])  
                L[i][j] = L[i - 1][j - 1] + 1;  
      
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  
    
    return L[m][n];  
}  



class Solution 
{
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) 
    {
        int i = 0, j = 0, m = A.size(), n = B.size();
        
        return lcs( A, B, m, n );
    }
};
