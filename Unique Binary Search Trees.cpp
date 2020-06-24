// https://leetcode.com/problems/unique-binary-search-trees/

// Unique Binary Search Trees

// Dynamic Programming for Catalan Numbers. O(N^2)


class Solution {
public:
    int numTrees(int n) 
    {
        return catalanDP(n) ;
    }
    

// A dynamic programming based function to find nth 
// Catalan number 

    int catalanDP(int n) 
    { 
        unsigned long int catalan[n+1]; // Table to store results of subproblems
        catalan[0] = catalan[1] = 1;  // Initialize first two values in table
        for (int i=2; i<=n; i++)   // Fill entries in catalan[] using recursive formula
        { 
            catalan[i] = 0; 
            for (int j=0; j<i; j++) 
                catalan[i] += catalan[j] * catalan[i-j-1]; 
        } 
        return catalan[n]; 
    } 
};
