/*
Given a binary tree, return the sum of values of its deepest leaves.
*/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
 
class Solution {
    int sum=0;
    int max =0;
    
    public int deepestLeavesSum(TreeNode root) {
        deepestLeavesSum1(root,0);
        deepestLeavesSum2(root,0);
        return sum;
    }
    
    public void deepestLeavesSum1(TreeNode root, int n) {
        n++;
        if(root.left!=null) deepestLeavesSum1(root.left, n);
        if(root.right!=null) deepestLeavesSum1(root.right, n);
        if(root.left==null && root.right==null) if(n>max) max=n;
     }
    
    public void deepestLeavesSum2(TreeNode root, int n){
        n++;
        if(root.left!=null) deepestLeavesSum2(root.left, n);
        if(root.right!=null) deepestLeavesSum2(root.right, n);
        if(root.left==null && root.right==null) if(n==max) {sum+=root.val;}
     }
}

/*
Runtime: 1 ms, faster than 80.39% of Java online submissions for Deepest Leaves Sum.
Memory Usage: 42 MB, less than 100.00% of Java online submissions for Deepest Leaves Sum.
*/
