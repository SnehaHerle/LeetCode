class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {                     
        dfs(root, NULL, 0);
        return (depth[x] == depth[y]) && (parent[x] != parent[y]);
    }
    
    void dfs(TreeNode* root, TreeNode* p, int d) {
        if (root == NULL) return;
        depth[root->val] = d;
        parent[root->val] = p;
        dfs(root->left, root, d + 1);
        dfs(root->right, root, d + 1);
    }
 
private:
    unordered_map<int, int> depth;
    unordered_map<int, TreeNode*> parent;
};

//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3322/

//Cousins in Binary Tree

//https://helloacm.com/the-cousins-in-binary-tree/
