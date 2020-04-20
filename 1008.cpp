/*
1008. Construct Binary Search Tree from Preorder Traversal
Medium

Return the root node of a binary search tree that matches the given preorder traversal.

(Recall that a binary search tree is a binary tree where for every node, any descendant of node.left has 
a value < node.val, and any descendant of node.right has a value > node.val.  Also recall that a preorder 
traversal displays the value of the node first, then traverses node.left, then traverses

Example 1:

Input: [8,5,1,7,10,12]
Output: [8,5,10,1,7,null,12]

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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int size = preorder.size();
        if (size==0) return NULL;
        TreeNode* root = new TreeNode(preorder[0]);
        if (size==1) {
            return root;
        }
        TreeNode* tree = root;
        int i = 1;
        int j = 0;
        bool bah = 0;
        while(i<size){
            bah = 0;
            tree = root;
            while(bah == 0){
                if(preorder[i]>=tree->val){

                    if(tree->right==NULL){
                        TreeNode* nod = new TreeNode(preorder[i]);
                        tree->right = nod;
                        bah =1;
                    }else {
                        tree= tree->right;
                    }

                }else {
                    if(tree->left==NULL){
                        TreeNode* nod = new TreeNode(preorder[i]);
                        tree->left = nod;
                        bah =1;
                    }else {
                        tree = tree->left;
                    }               
                }
            }
            i++;
        }
        return root;
    }
};

/*
Runtime: 4 ms, faster than 86.93% of C++ online submissions for Construct Binary Search Tree from Preorder Traversal.
Memory Usage: 10.4 MB, less than 95.24% of C++ online submissions for Construct Binary Search Tree from Preorder Traversal.
*/
