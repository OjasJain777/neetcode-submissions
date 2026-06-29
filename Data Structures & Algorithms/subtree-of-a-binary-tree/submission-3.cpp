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

bool f(TreeNode *a, TreeNode *b){
    if(a==0 && b==0){
        return 1;
    }
    else if(a==0 || b==0){
        return 0;
    }
    else if(a->val != b->val){
        return 0;
    }
    return (f(a->left, b->left) && f(a->right, b->right));
}
void t(TreeNode *a, TreeNode *subRoot,bool &ans){
    if(a==0){
        return;
    }
    if(a->val == subRoot->val){
        ans = ans || f(subRoot, a);
    }
    t(a->left, subRoot,ans);
    t(a->right, subRoot,ans);
}

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool ans = 0;
        t(root, subRoot, ans);
        return ans;
    }
};
