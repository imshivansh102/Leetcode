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
public:

    void inorder(TreeNode* root, vector<int>& result) {
        // base case.
        if (root == NULL){

            return ;

        }

        // recursion call.
        inorder(root->left, result); // L
        result.push_back(root->val); // N
        inorder(root->right, result); // R
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;

        inorder(root, result);

        return result;
        
    }
};