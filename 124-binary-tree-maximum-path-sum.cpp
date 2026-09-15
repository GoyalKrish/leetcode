/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int ans;
    int rec(TreeNode* root){
        if(!root) return 0;
        int left = max(0,rec(root->left));
        int right = max(0,rec(root->right));

        ans = max(ans, root->val + left + right);
        return root->val + max(left, right);
    }
public:

    int maxPathSum(TreeNode* root) {
        ans = INT_MIN;
        rec(root);
        return ans;
    }
};