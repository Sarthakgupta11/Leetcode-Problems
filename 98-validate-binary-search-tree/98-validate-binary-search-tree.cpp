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
    vector<int>a;
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        
        inorder(root->left);
        a.push_back(root->val);
        inorder(root->right);
    }
    
    bool isValidBST(TreeNode* root) 
    {
        inorder(root);
        //cout<<a.size()<<" ";
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i+1]<=a[i])
                return false;
        }
        
        return true;
    }
};