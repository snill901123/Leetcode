class Solution {
public:
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root);
        return sum;
    }
    void dfs(TreeNode* root){
        if(!root){
            return;
        }
        if(root->left and !root->left->left and !root->left->right){
            sum+=root->left->val;
        }
        dfs(root->left);
        dfs(root->right);
    }
};
