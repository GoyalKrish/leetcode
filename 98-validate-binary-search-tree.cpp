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
    bool rec(TreeNode* root, long left, long right){
        if(!root) return true;
        if(root->val >= right || root->val <= left) return false;

        return (rec(root->left, left, min((long)root->val,right)) && rec(root->right, max((long)root->val,left), right));
    }
public:
    bool isValidBST(TreeNode* root) {
        if(!root || (!root->left && !root->right)) return true;
        return rec(root,LONG_MIN,LONG_MAX);
    }
};