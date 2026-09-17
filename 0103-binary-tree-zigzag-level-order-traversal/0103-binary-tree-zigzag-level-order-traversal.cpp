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
        vector<vector<int>> result;

        if (root == NULL)
            return result;

        queue<TreeNode*> q;
        q.push(root);

        int currentlevel = 0;

        while (!q.empty()) {
            int k = q.size();
            vector<int> level;
            for (int i = 0; i < k; i++) {
                TreeNode* node = q.front();
                q.pop();

                level.push_back(node->val);

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);
            }
            if (currentlevel % 2 == 1) {
                reverse(level.begin(), level.end());
            }
            result.push_back(level);
            currentlevel++;
        }
        return result;
    }
};