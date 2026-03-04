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

     void postorder(TreeNode* root, vector<int>& result) {
        // base case.
        if (root == NULL){
            return ;
        }

        // recursion call.
        postorder(root->left, result); // L
        postorder(root->right, result); // R
        result.push_back(root->val); // N

    }

    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> result;

        postorder(root,result);

        return result;
        
    }
};