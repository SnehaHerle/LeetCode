// https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3372/
// Sum Root to Leaf Numbers
// Time complexity - O(N)


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

void sumNumbersRecursive(TreeNode* root, long sum, long &ans)
{
        if(root == NULL)
            return;
    
        sum = root->val + sum*10;
        
        if(root->left == NULL && root->right == NULL)
        {
            ans += sum;
            return;
        }
        
        sumNumbersRecursive(root->left, sum, ans);
        sumNumbersRecursive(root->right, sum, ans);
}

class Solution {
public:
    int sumNumbers(TreeNode* root) 
    {
        long ans = 0;
        sumNumbersRecursive(root, 0, ans);
        return ans;
    }
    
};

