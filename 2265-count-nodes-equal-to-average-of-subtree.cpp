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
    int ans = 0;
    pair<int,int> rec(TreeNode* root){
        if(!root) return {0,0};

        auto [leftSum, leftCount] = rec(root->left);
        auto [rightSum, rightCount] = rec(root->right);

        int sum = root->val + leftSum + rightSum;
        int count = 1 + leftCount + rightCount;
        
        int avg = sum / count;
        ans += root->val == avg;

        return {sum,count};

    }
public:
    int averageOfSubtree(TreeNode* root) {
        rec(root);
        return ans;
    }
};