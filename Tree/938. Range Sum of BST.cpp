#Solution 1
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL) return 0;
        if(root->val>=low && root->val<=high)
            return root->val + rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
        else if(root->val>=high) return rangeSumBST(root->left,low,high);
        else return rangeSumBST(root->right,low,high);  
    }
};

#Solution 2
class Solution {
public:
    int sum =0;
    int inOrder(TreeNode *root,int low, int high){
        if(root!=NULL){
            inOrder(root->left,low,high);
            if(root->val>=low && root->val<=high){
                sum+=root->val;
            }
            inOrder(root->right,low,high);
        }
        return sum;  
    }
    
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res = inOrder(root,low,high);
        return res;
    }
};
