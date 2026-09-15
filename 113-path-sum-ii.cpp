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
    vector<vector<int>> ans;
    int target;

    void rec(TreeNode* root,int currSum,vector<int> curr){
        if(!root) return;
        curr.push_back(root->val);
        currSum += root->val;
        if(!root->left && !root->right){
            if(currSum == target){
                ans.push_back(curr);
            }
            return;
        }

        rec(root->left, currSum, curr);
        rec(root->right, currSum, curr);
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        target = targetSum;
        rec(root, 0, {});
        return ans;
    }
};