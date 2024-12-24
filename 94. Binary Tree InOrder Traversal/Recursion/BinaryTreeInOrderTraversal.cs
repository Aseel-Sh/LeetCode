/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public IList<int> InorderTraversal(TreeNode root) {
        IList<int> result = new List<int>();
        inorder(root, result);
        return result;
    }

    private void inorder(TreeNode root, IList<int> result){
        if(root == null){
            return;
        }

        inorder(root.left, result);
        result.Add(root.val);
        inorder(root.right, result);
    }
}