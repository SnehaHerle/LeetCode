//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/537/week-4-may-22nd-may-28th/3339/

//Construct Binary Search Tree from Preorder Traversal


//O(N^2)

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

//worst case time complexity will be O(N^2) in case of a skewed tree (Increasing/Descending order). 

TreeNode *buildBST(TreeNode* &root, int element)
{
	if(!root)  //creates a new node to insert each time
		return root = new TreeNode(element);
	
	if(root->val > element)
		root->left = buildBST(root->left, element);
	else
		root->right = buildBST(root->right, element);
	
	return root;
}



class Solution 
{
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        TreeNode *root = NULL;

        for(auto x : preorder) //every element is compared with the root each time before inserting.
	            buildBST(root,x);

        return root;
    }
};

//O(N)

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

int construct_BST(vector<int> &preorder,int n,int pos,TreeNode *curr,int left,int right)
{
    if(pos==n || preorder[pos]<left || preorder[pos]>right) //Boundary case
        return pos;
        
    if(preorder[pos]<curr->val)     //Insert in left-subtree
    {
        curr->left = new TreeNode(preorder[pos]);
        pos += 1;
        pos = construct_BST(preorder,n,pos,curr->left,left,curr->val-1);
    }
        
    if(pos==n || preorder[pos]<left || preorder[pos]>right)
        return pos;
        
    //Insert in right-subtree
    curr->right = new TreeNode(preorder[pos]);
    pos += 1;
    pos = construct_BST(preorder,n,pos,curr->right,curr->val+1,right);
    
    return pos;
}



class Solution 
{
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        int n = preorder.size();
        
        if(n==0)
            return NULL;
        
        TreeNode *root = new TreeNode(preorder[0]);
        
        if(n==1)
            return root;

        construct_BST(preorder, n, 1, root, INT_MIN, INT_MAX);
        
        return root;
    }
};
