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
    int widthOfBinaryTree(TreeNode* root) {
        unsigned long max_width = 0, initial_size;
        queue<pair<TreeNode *, unsigned long>> q;
        q.push(make_pair(root, 1));
        TreeNode* curr;
        
        while (!q.empty() && root)
        {
            initial_size = q.size();
            max_width = max(q.back().second - q.front().second + 1, max_width);
            
            for (int i = 0; i < initial_size; i++)
            {
                curr = q.front().first;
                
                if (curr->left)
                    q.push(make_pair(curr->left, q.front().second * 2 - 1));
                
                if (curr->right)
                    q.push(make_pair(curr->right, q.front().second * 2));
                
                q.pop();
            }
        }
        
        return static_cast<int>(max_width);
    }
};
