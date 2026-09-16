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

    int helperfunction(TreeNode* root){
        if(root==NULL) return 0;
        if(root->left==0&&root->right==0) return root->val;
        stack <TreeNode*> st;
        vector <TreeNode*> storage;
        unordered_map<TreeNode* , int> height;
        int maxpathsum =    INT_MIN;
        int currentsum =0;
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
        reverse(storage.begin(),storage.end());

        for(TreeNode* node : storage){
            int leftheight= 0;
            int rightheight =0;
            if(node->left){
                leftheight=max(0,height[node->left]);
            }
            if(node->right){
                rightheight=max(0,height[node->right]);
            }

            
            
            currentsum = node->val+leftheight+rightheight;
            maxpathsum = max(currentsum,maxpathsum);
            height[node]= node->val + max(leftheight,rightheight);
            
        }
        return maxpathsum;
    }


    int maxPathSum(TreeNode* root) {
        
        return helperfunction(root);
    }
};