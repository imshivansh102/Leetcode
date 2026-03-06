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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        // Base case.
        if(root == NULL){
            return NULL;
        }
        // recursive call.
        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);
        // remove leaf nodes.
        if(root->left == NULL && root->right == NULL && root->val == target){
            return NULL; // it returns null if target matched.
        }

        return root;
        
    }
};