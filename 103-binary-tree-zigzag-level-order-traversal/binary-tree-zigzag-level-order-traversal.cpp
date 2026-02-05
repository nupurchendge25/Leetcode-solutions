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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> qu;
        if (root == nullptr) return {};

        vector<vector<int>> res;
        qu.push(root);
        bool leftToRight=true;

        while(!qu.empty()){
            int n=qu.size();
            vector<int> ans(n);
            for(int i=0;i<n;i++){
                int idx;
                TreeNode* node=qu.front();
                
                if(leftToRight) {
                    idx=i;  
                }
                else{
                     idx=n-i-1;
                }
                ans[idx]=node->val;
                if (node->left) qu.push(node->left);
                if (node->right) qu.push(node->right);
                qu.pop();
            }
            leftToRight=!leftToRight;
            res.push_back(ans);
        }
        return res;

    }
};