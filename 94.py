# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:


    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        Solution.helper(root,ans)
        return ans

    def helper(node, ans):
        if node is not None:
            Solution.helper(node.left, ans)
            ans.append(node.val)
            Solution.helper(node.right, ans)
        return
