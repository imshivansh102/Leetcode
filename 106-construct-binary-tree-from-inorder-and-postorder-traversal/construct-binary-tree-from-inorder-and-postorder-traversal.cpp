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

    TreeNode* solve(vector<int>& postorder, vector<int>& inorder, int start, int end, int& index){
        // Base case.
        if(start > end){
            return NULL;
        }
        int rootVal = postorder[index];
        int i= start;

        for(; i<=end; i++){ // finding root value in inorder.
            if(inorder[i] == rootVal){
                break;
            }
        }
        index--; // decrease index of postorder.Because next postorder element is the root of next subtree.

        TreeNode* root = new TreeNode(rootVal); // creating root node.

        // reverse traversl so in postorder we move Root ← Right ← Left when going backwards.
        root->right = solve(postorder,inorder,i+1,end,index); // first we print right then left.
        root->left = solve(postorder,inorder,start,i-1,index);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();

        int index = n - 1;

        return solve(postorder,inorder,0,n-1,index);
        
        
    }
};