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
        return helper(root->left,root->right);
    }
    bool helper(TreeNode* leftSub,TreeNode*rightSub){
        if(!leftSub and !rightSub){  //NULL
            return true;
        }
        if(!leftSub and rightSub){  //left NULL
            return false;
        }
        if(leftSub and !rightSub){  //right NULL
            return false;
        }
        if(leftSub->val!=rightSub->val){  //different val
            return false;
        }
        return helper(leftSub->left,rightSub->right) and helper(leftSub->right,rightSub->left);
    }
};
