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
        int maxlength =0;
        queue <TreeNode*> q;
        if(root==NULL) return maxlength;
        q.push(root);
        while(!(q.empty())){
            int k = q.size();
            for(int i =0;i<k;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

            }
            maxlength = maxlength+1;
        }

        return maxlength;
    }
};