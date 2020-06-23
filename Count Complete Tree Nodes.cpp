//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3369/

//Count Complete Tree Nodes

//Time Complexity - O(N)

//Space Complexity - O(N)

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
class Solution {
public:
    int countNodes(TreeNode* root) 
    {
        if (root == NULL)  
            return 0; 
        
        queue<TreeNode*> q; 
        q.push(root); 
        int count = 0;
        
        while (q.empty() == false)   // level order traversal
        {
            TreeNode* node = q.front(); 
            cout << node->val << " ";
            count++;
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
                
        }
        return count;
        
    }
};
