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
    bool isSymmetric(TreeNode* root) {
        if(NULL == root){
            return true;
        }

        return mirror(root->left, root->right);
    }

    bool mirror(TreeNode* left, TreeNode* right){
        if(NULL == left && NULL ==right ){
            return true;
        }
        if(NULL == left || NULL == right ){
            return false;
        }
        if(left->val != right->val){
            return false;
        }

        return(mirror(left->left, right->right) && mirror(left->right, right->left));
    }
