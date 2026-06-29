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
int t(TreeNode *a){
    if(a==0){
        return 0;
    }
    int l = t(a->left)+1;
    int r= t(a->right)+1;
    return max(l,r);
}
class Solution {
public:
    int maxDepth(TreeNode* root) {
        return t(root);
    }
};
