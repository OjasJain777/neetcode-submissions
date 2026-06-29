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
void t(TreeNode *a, vector<int> &b){
    if(a==0){
        return;
    }
    t(a->left, b);
    b.push_back(a->val);
    t(a->right, b);
}
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int> a;
        t(root, a);
        for(int i = 1;i<a.size();i++){
            if(a[i]<=a[i-1]){
                return 0;
            }
        }
        return 1;
    }
};








