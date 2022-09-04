# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        stack = []
        ans = []

        if (root is None):
            return []

        stack.append(root)

        while (len(stack)>0):
            tmp = stack.pop()
            ans.append(tmp.val)

            if (tmp.right is not None):
                stack.append(tmp.right)

            if (tmp.left is not None):
                stack.append(tmp.left)



        return ans