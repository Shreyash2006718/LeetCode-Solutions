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

    int helperfunction(TreeNode*root){
        if(root==NULL) return 0;
        stack<TreeNode*> st;
        vector<TreeNode*> storage;
        unordered_map<TreeNode*,int> height;
        st.push(root);
        int diameter =0;
        while(!(st.empty())){
            TreeNode* node = st.top();
            st.pop();
            if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);
            storage.push_back(node);
        }
        reverse(storage.begin(),storage.end());

        for(TreeNode* node:storage){

            int leftheight =0;
            int  rightheight =0;
            if(node->left){
                leftheight= height[node->left];
            }
            if(node->right){
                rightheight = height[node->right];
            }

            height[node] = 1+max(leftheight, rightheight);

            diameter= max(diameter, leftheight+rightheight);
        }

        return diameter;

    }    


    int diameterOfBinaryTree(TreeNode* root) {
         return helperfunction(root);

    }
};