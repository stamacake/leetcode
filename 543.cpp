/*
543. Diameter of Binary Tree
Easy
Given a binary tree, you need to compute the length of the diameter of the tree. The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int max=1;
    int diameterOfBinaryTree(TreeNode* root) {
       if(root==NULL){
           return 0;
       } else {
           fra(root);
       }
        return max-1;
    }
    
    int fra(TreeNode* p){
        
        if(p!=NULL){
            int l = fra(p->left);
            int r = fra(p->right);
            max = (l+r+1 > max ) ? l+r+1 : max;
            return (l < r) ? r+1 : l+1;
        } else return 0;

    }
};

/*
Runtime: 0 ms, faster than 100% of C++ online submissions for Best Time to Buy and Sell Stock II.
Memory Usage: 16.9 MB, less than 100.00% of C++ online submissions for Best Time to Buy and Sell Stock II.
*/
