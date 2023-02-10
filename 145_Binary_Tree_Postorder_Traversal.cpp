class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
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
            
            vector<int> val2 = postorderTraversal(root->right); 
            
            val1.insert(val1.end(),val2.begin(),val2.end());
            val1.push_back(root->val);
            return val1;
        }else if( NULL == root->right){
            vector<int> val1;
            
            vector<int> val2 = postorderTraversal(root->left);
    
            val1.insert(val1.end(),val2.begin(),val2.end());
            val1.push_back(root->val);
            
            return val1;
        }else{
            vector<int> val1;
            vector<int> val2 = postorderTraversal(root->left);
            vector<int> val3 = postorderTraversal(root->right);
            val1.insert(val1.end(),val2.begin(),val2.end());
            val1.insert(val1.end(),val3.begin(),val3.end());
            val1.push_back(root->val);
            return val1;
        }
    }
};
