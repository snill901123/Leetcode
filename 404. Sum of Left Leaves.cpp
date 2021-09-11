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
/*Step 1.葉子的左右邊一定是NULL
  Step 2.判斷一個節點有沒有左邊
  Step 3.有的話，判斷他是不是一個葉子
  Step 4.條件皆正確的話，把葉子的值給sum，並加上節點左邊和右邊回傳
*/
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        if(root==NULL){
            return 0;
        }
        if(root->left and root->left->left==NULL and root->left->right==NULL){
            sum=root->left->val;
        }
        return sum+sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};
