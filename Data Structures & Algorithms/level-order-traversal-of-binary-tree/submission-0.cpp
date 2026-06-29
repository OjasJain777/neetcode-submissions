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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        vector<vector<int>> ans;
        if(root==0){
            return ans;
        }
        q.push(root);
        while(q.size()!=0){
            vector<int> a;
            int n = q.size();
            for(int i = 0 ;i<n;i++){
                auto y= q.front();
                q.pop();
                a.push_back(y->val);
                if(y->left!=0){
                    q.push(y->left);
                }
                if(y->right!=0){
                    q.push(y->right);
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};
