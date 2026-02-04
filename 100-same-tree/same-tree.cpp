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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> qu1;
        queue<TreeNode*> qu2;

        qu1.push(p);
        qu2.push(q);

        while(!qu1.empty() && !qu2.empty()){
            int n1=qu1.size();
            int n2=qu2.size();
            if(n1!=n2) return false;

            TreeNode* node1=qu1.front();
            TreeNode* node2=qu2.front();
            qu1.pop();
            qu2.pop();
            
            if(node1==nullptr && node2==nullptr) continue;

            if(node1==nullptr || node2==nullptr) return false;

            if(node1->val!=node2->val) return false;

            qu1.push(node1->left);
            qu1.push(node1->right);
            qu2.push(node2->left);
            qu2.push(node2->right);
        }
        return true;
    }
};