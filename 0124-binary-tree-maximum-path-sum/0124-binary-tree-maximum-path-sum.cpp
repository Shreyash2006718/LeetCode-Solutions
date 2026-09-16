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

    int helperfunction(TreeNode* root, int& maxsum) {

        if (root == NULL)
            return 0;

        int left = max(0, helperfunction(root->left, maxsum));
// This is the recursive code which means we will will using the same function to find the maximum for left as well as right too
        int right = max(0, helperfunction(root->right, maxsum));

        int currentPath = root->val + left + right;
// This is in notes
        maxsum = max(maxsum, currentPath);

        return root->val + max(left, right);
        // Same in notes 
    }

    int maxPathSum(TreeNode* root) {
        int maxsum = INT_MIN;

        helperfunction(root, maxsum);

        return maxsum;
    }
};