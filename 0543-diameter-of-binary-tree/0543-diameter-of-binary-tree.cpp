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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        hight(root,diameter);
        return diameter;
    }
    private:
    int hight(TreeNode* root,int& diameter)
    {
        if(root==nullptr) return 0;
        int ln=hight(root->left,diameter);
        int rn=hight(root->right,diameter);
        
        diameter=max(diameter,ln+rn);
        return 1+max(ln,rn);
    }
};