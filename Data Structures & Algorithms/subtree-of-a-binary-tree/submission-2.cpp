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
void t(TreeNode *a, int v,vector<TreeNode *> &b){
    if(a==0){
        return;
    }
    if(a->val == v){
        b.push_back(a);
    }
    t(a->left, v,b);
    t(a->right, v,b);
}

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

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        vector<TreeNode *> b;
        t(root, subRoot->val, b);
        bool ans = 0;
        for(auto y: b){
            ans = ans || f(subRoot, y);
        }
        return ans;
    }
};
