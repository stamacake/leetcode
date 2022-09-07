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
    public List<Integer> inorderTraversal(TreeNode root) {

        // стек обхода
        Stack<TreeNode> st = new Stack<>();
        // ответ
        List<Integer> ans = new ArrayList<>();
        // указатель на текущую ноду
        TreeNode tmp = root;

        while(tmp!=null || !st.isEmpty()){
            // пока можем - движемся по левому поддереву
            if (tmp!=null){
                st.add(tmp);
                tmp = tmp.left;
            } else { // нашли вершину без левого ребенка
                // заносим в ответ
                // из стека выносим вершину, которая "выше" текущей/tmp
                tmp = st.pop();
                ans.add(tmp.val);

                tmp = tmp.right;
            }

        }

        return ans;
    }
}