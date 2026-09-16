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

    bool helperfunction(TreeNode* root){
        if(root==NULL) return true;
        stack<TreeNode*> st;
        unordered_map<TreeNode*,int> height;
        vector <TreeNode*> storage;
        
        st.push(root);
       
        while(!(st.empty())){
            TreeNode* node = st.top();
            st.pop();

            if(node->left) {
                st.push(node->left);
            }
            if(node->right){
                st.push(node->right);
            }
            storage.push_back(node);
        }
        reverse(storage.begin(), storage.end());
    


    for(TreeNode* node : storage){
        int leftheight=0;
        int rightheight=0;
        if(node->left) {
            leftheight=height[node->left];
        }
        if(node->right){
            rightheight=height[node->right];
        }

        if(abs(leftheight-rightheight)>1) return false;

        height[node]=1+max(leftheight,rightheight);
    }
        return true;
    }


    

    bool isBalanced(TreeNode* root) {
        return helperfunction(root);
    }
};