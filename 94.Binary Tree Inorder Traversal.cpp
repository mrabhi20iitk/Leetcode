class Solution {
public:
    void helper(TreeNode* root,vector<int> &res){
        if(root!=NULL){
            helper(root->left,res);
            res.push_back(root->val);
            helper(root->right,res);
        }
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
        
    }
};
