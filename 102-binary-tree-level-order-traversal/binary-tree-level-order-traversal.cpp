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
     vector<vector<int>> result;
     if(root == nullptr) return result;

     queue<TreeNode*> qu;

     qu.push(root);
     while(!qu.empty()){
        vector<int> ans;
        int n=qu.size();
        for(int i=0;i<n;i++){
            TreeNode* node=qu.front();
            ans.push_back(node->val);

            if(node->left!=nullptr){
                qu.push(node->left);
            }
            if(node->right!=nullptr){
                qu.push(node->right);
            }
            qu.pop();
        }
        result.push_back(ans);
     }   
     return result;
    }
};