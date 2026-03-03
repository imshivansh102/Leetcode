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
    int minDepth(TreeNode* root) {

        if ( root == NULL) { // base case.
            return 0;
        }
        if ( root->left == NULL ){ // When tree is right skewed.
            return 1 + minDepth(root->right);
        }
        if ( root->right == NULL ){ // When tree is left skewed.
            return 1 + minDepth(root->left); 
        }
        
        // recursive call.
        int left = minDepth(root->left);
        int right = minDepth(root->right);

        int ans = min(left,right) + 1;
        return ans;
        
    }
};