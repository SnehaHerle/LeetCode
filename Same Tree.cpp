//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/545/week-2-july-8th-july-14th/3389/

//Same Tree.

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if (p == NULL || q == NULL) {
        return p == q;
        }
    
        if (p->val != q->val) {
        return false;
        }
    
        return isSameTree(p->right, q->right) && isSameTree(p->left, q->left);   
    }
};
