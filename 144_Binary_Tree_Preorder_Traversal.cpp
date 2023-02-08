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
    vector<int> preorderTraversal(TreeNode* root) {
        if(NULL == root){
            vector<int> val1;
            return val1;
        }
        if(NULL == root->left && NULL == root->right){
            vector<int> val1;
            val1.push_back(root->val);
            return val1;
        }else if(NULL == root->left){
            vector<int> val1;
            val1.push_back(root->val);
            vector<int> val2 = preorderTraversal(root->right); 
            
            val1.insert(val1.end(),val2.begin(),val2.end());
            return val1;
        }else if( NULL == root->right){
            vector<int> val1;
            
            vector<int> val2 = preorderTraversal(root->left);
            val1.push_back(root->val);
            val1.insert(val1.end(),val2.begin(),val2.end());
            
            return val1;
        }else{
            vector<int> val1;
            vector<int> val2 = preorderTraversal(root->left);
            vector<int> val3 = preorderTraversal(root->right);
            val1.push_back(root->val);
            val1.insert(val1.end(),val2.begin(),val2.end());
            
            val1.insert(val1.end(),val3.begin(),val3.end());
            return val1;
        }
    }
};
