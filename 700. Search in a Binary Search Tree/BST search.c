/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    if(root == NULL || root->val == val){
        return root;
    }
    //printf("root val: %d\n",root->val);   
    if(root->val < val){
        return searchBST(root->right, val);
    }
    else if(root->val > val){
        return searchBST(root->left, val);
    }
    return NULL;
}
