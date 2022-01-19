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
    int ans;
    int rangeSumBST(TreeNode* root, int low, int high) {
        ans = 0;
        dfs(root, low, high);
        return ans;
    }
    
    void dfs(TreeNode* root, int L, int R) {
        //Base case
        if(!root) return;
		//If in range add 
        if(root->val >= L && root->val <= R) ans += root->val;
        //Digging the depths of the tree
		if(root->val > L) dfs(root->left,L,R);
        if(root->val < R) dfs(root->right,L,R);
        }
};
