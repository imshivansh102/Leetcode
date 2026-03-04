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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Base cases.
        if (p == nullptr && q == nullptr){
            return true;
        } 
        if (p == nullptr || q == nullptr) {
            return false;
        }
        // Check current node values.
        if (p->val != q->val) {
            return false;
        }
        // Recursive check on left and right subtrees.
        bool ans = isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        return ans;
        
    }
};