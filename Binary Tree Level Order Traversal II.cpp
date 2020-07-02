//https://www.geeksforgeeks.org/reverse-level-order-traversal/

//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3378/

//Binary Tree Level Order Traversal II

//Time Complexity = O(N)


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
class Solution 
{
public:
    void leavesAtGivenLevel(TreeNode* root, int level, vector<int> &leaves)  
    {  
        if (root == NULL)  
            return;  
        
        if (level == 1)
        {
            cout << root->val << " ";
            leaves.push_back(root->val);
        }
              
        else if (level > 1)  
        {  
            leavesAtGivenLevel(root->left, level - 1, leaves);  
            leavesAtGivenLevel(root->right, level - 1, leaves);  
        }  
    }  
    int height(TreeNode* root)  
    {  
        if (root == NULL)  
            return 0;
        
        else
        { 
            int lheight = height(root->left);  
            int rheight = height(root->right);  
  
            if (lheight > rheight)  
                return(lheight + 1);  
            else 
                return(rheight + 1);  
        }    
    }   
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        int h = height(root), i;
        vector<int> temp;
        vector<vector<int>> ans;
        for (i = h; i >= 1; i--) 
        {
            temp = {};
            leavesAtGivenLevel(root, i, temp);
            ans.push_back(temp);
        } 
        return ans;
    }
};
