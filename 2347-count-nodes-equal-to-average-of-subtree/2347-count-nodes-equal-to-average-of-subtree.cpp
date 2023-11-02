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
    int count=0;
    int preorder(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return root->val+preorder(root->left)+preorder(root->right);
    }
    int csubtree(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+csubtree(root->left)+csubtree(root->right);
    }
    int equal(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        TreeNode* head=root;
        int c=csubtree(head);
        int s=preorder(head);
        if((s/c)==head->val){
            return 1;
        }
        return 0;
    }
    int averageOfSubtree(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return equal(root)+averageOfSubtree(root->left)+averageOfSubtree(root->right);

    }
};