//https://leetcode.com/explore/featured/card/june-leetcoding-challenge/541/week-3-june-15th-june-21st/3361/

//Search in a Binary Search Tree


class Solution {
   public:
     TreeNode* searchBST(TreeNode* root, int val) {
     return root==NULL?NULL:(val==root->val?root:(root->val>val?searchBST(root->left,val):searchBST(root->right,val)));
  }
};
