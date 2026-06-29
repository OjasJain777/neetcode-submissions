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
bool t(TreeNode *a, TreeNode *b, vector<TreeNode *> &v){
    if(a==0){
        return 0;
    }
    if(a==b){
        v.push_back(a);
        return 1;
    }
    v.push_back(a);
    bool d = (t(a->left, b, v) || t(a->right, b,v));
    if(d==0){
        v.pop_back();
    }
    return d;
}
bool f(TreeNode *a, TreeNode *b, unordered_set<TreeNode *> &v){
    if(a==0){
        return 0;
    }
    if(a==b){
        v.insert(a);
        return 1;
    }
    v.insert(a);
    bool d = (f(a->left, b, v) || f(a->right, b,v));
    if(d==0){
        v.erase(a);
    }
    return d;
}
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode *> v1;
        unordered_set<TreeNode *> v2;
        t(root, p, v1);
        f(root, q, v2);
        for(int j = v1.size()-1;j>=0;j--){
            if(v2.count(v1[j])!=0){
                return v1[j];
            }
        }
        return root;
    }
};
