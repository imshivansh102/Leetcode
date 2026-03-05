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

    int solve(TreeNode* root, int curr) {
        // Base case.
        if( root == NULL ){
            return 0;
        }
            
        curr = (curr * 10) + root->val;

        // leaf node (we found a root to leaf path)
        if( root->left == NULL && root->right == NULL ) {
            return curr;
        }
        // Recursive call.
        int left = solve(root->left, curr);
        int right = solve(root->right, curr);
        int ans = left + right;

        return ans;
    }

    int sumNumbers(TreeNode* root) {
        int curr = 0;
        return solve(root, curr);
    }
};