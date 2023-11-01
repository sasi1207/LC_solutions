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
    void inorder(TreeNode* root,map<int,int>& pro){
        if(root==NULL){
            return;
        }
        inorder(root->left,pro);
        pro[root->val]++;
        inorder(root->right,pro);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        map<int,int> pro;
        inorder(root,pro);
        map<int, int>::iterator it = pro.begin();
        int maxi=INT_MIN;
        while (it != pro.end()) {
            if(maxi<it->second){
                res.clear();
                maxi=it->second;
                res.push_back(it->first);
            }
            else if(maxi==it->second){
                res.push_back(it->first);
            }
            ++it;
        }
        return res;
    }
};