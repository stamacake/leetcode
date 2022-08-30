# Given the root of a binary tree, invert the tree, and return its root.
# Input: root = [4,2,7,1,3,6,9]
# Output: [4,7,2,9,6,3,1]

# Input: root = [2,1,3]
# Output: [2,3,1]



# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

import queue

class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:        
        if (root is not None):
            q = queue.SimpleQueue()
            q.put(root)
            
            while(not q.empty()):
                current = q.get()
                current.right, current.left = current.left, current.right
                
                if current.right:
                    q.put(current.right)
                if current.left:
                    q.put(current.left)
                
        return root
