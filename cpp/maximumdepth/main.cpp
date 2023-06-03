#include "../template.hpp"

int maxDepth(TreeNode* root) {
    /*
    This is bad because I called maxDepth 4 times
    */
    // if(root == nullptr) return 0;
    //     return maxDepth(root->left) > maxDepth(root->right) ?
    // 1 + maxDepth(root->left) : 1 + maxDepth(root->right);

/*
Better because only calls 2 , omfg 
*/
    if(root == nullptr) return 0;
    int l = maxDepth(root->left);
    int r = maxDepth(root->right);
    return 1 + max(l,r);
}

int main() {
    TreeNode* input1 =
        new TreeNode(1, nullptr, new TreeNode(3, new TreeNode(3), nullptr));
    cout << maxDepth(input1);
}