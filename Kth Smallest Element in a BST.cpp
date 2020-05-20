//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3335/

//Kth Smallest Element in a BST

//https://www.geeksforgeeks.org/find-k-th-smallest-element-in-bst-order-statistics-in-bst/

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

class Node 
{
public:
    int val, size;
    Node *left, *right;
    Node(int v) : val(v), size(1), left(NULL), right(NULL) {}
};

class Solution 
{
public:
    int kthSmallest(TreeNode* root, int k) 
    {
        Node* node = addSize(root);
        return find(node, k);
    }
private:
    Node* addSize(TreeNode* root) 
    {
        if (!root) 
        {
            return NULL;
        }
        Node* node = new Node(root -> val);
        node -> left = addSize(root -> left);
        node -> right = addSize(root -> right);
        
        if (node -> left) 
        {
            node -> size += node -> left -> size;
        }
        
        if (node -> right) 
        {
            node -> size += node -> right -> size;
        }
        return node;
    }
    
    int find(Node* node, int k) 
    {
        if (node -> left) 
        {
            if (node -> left -> size >= k) 
            {
                return find(node -> left, k);
            }
            if (node -> left -> size == k - 1) 
            {
                return node -> val;
            }
            return find(node -> right, k - node -> left -> size - 1);
        }
        if (k == 1) 
        {
            return node -> val;
        }
        return find(node -> right, k - 1);
    }
};
