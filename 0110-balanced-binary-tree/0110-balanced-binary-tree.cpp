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

    int helperbalance(TreeNode* root){
        TreeNode* node = root;
        if(node ==NULL) return 0;
        int leftsubtree= helperbalance(node->left);
        if(leftsubtree==-1) return -1;
        int rightsubtree =  helperbalance(node->right);
        if(rightsubtree == -1 ) return -1;
        int difference = abs(leftsubtree - rightsubtree);
        if(difference>1) return -1;
        else return 1+max(leftsubtree, rightsubtree);
    }


    bool isBalanced(TreeNode* root) {
        int result = helperbalance(root);
        if(result==-1) return false;
        return true;
    }
};