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
private:
    int height(TreeNode* root) {

        if ( root == NULL ){ // Base condition.
            return 0;
        }
        
        // Recursive call.
        int left = height(root->left);
        int right = height(root->right);

        int ans = max(left,right) + 1;
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        // base condition.
        if( root == NULL ){
            return 0;
        }
        // recursive call.
        int op1 = diameterOfBinaryTree(root->left);
        int op2 = diameterOfBinaryTree(root->right);
        int op3 = height(root->left) + height(root->right);

        int ans = max(op1, max(op2,op3));
        return ans;
        
    }
};