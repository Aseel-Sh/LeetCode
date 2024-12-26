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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        unordered_map<TreeNode*, TreeNode*> parent;
        stack<TreeNode*> stk;

        parent[root] = nullptr;
        stk.push(root);

        while (!parent.count(p) || !parent.count(q)) {
            TreeNode* node = stk.top();
            stk.pop();

            if (node->left) {
                parent[node->left] = node;
                stk.push(node->left);
            }

            if (node->right) {
                parent[node->right] = node;
                stk.push(node->right);
            }
        }

        unordered_set<TreeNode*> ancestors;
        while (p != nullptr) {
            ancestors.insert(p);
            p = parent[p];
        }

        while (!ancestors.count(q)) {
            q = parent[q];
        }

        return q;
    }
};