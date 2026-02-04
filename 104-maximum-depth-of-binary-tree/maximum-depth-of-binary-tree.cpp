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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> qu;
        int cnt=0;
        if(root==nullptr) return cnt;

        qu.push(root);

        while(!qu.empty()){
            int n=qu.size();
            for(int i=0;i<n;i++){
                TreeNode* node=qu.front();
                if(node->left!=nullptr){
                    qu.push(node->left);
                }
                if(node->right!=nullptr){
                    qu.push(node->right);
                }
                qu.pop();
            }
            cnt++;
        }
        return cnt;
    }
};