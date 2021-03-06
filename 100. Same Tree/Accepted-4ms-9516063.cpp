// 100. Same Tree
// https://leetcode.com/problems/same-tree/
// 

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if(p==NULL || q==NULL || (p != NULL && q != NULL && p->val != q->val))
        {
            return (p==NULL && q==NULL) || (p != NULL && q != NULL && p->val == q->val);
        }
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

/*
Given two binary trees, write a function to check if they are equal or not. Two binary trees are considered equal if they are structurally identical and the nodes have the same value. Subscribe to see which companies asked this question. Show Tags Tree Depth-first Search
*/
