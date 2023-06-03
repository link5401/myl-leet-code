#include "../template.hpp"
bool isMirror(TreeNode* left, TreeNode* right){
    if(!left && !right) return true;
    if(!left || !right) return false;
    return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right,right->left);

}
bool isSymmetric(TreeNode* root) {
   return isMirror(root->left,root->right);
}

int main() {
    TreeNode* input = new TreeNode(1, nullptr, nullptr);
    TreeNode* left = new TreeNode(2, new TreeNode(3, nullptr, nullptr),
                                  new TreeNode(4, nullptr, nullptr));
    TreeNode* right = new TreeNode(2, new TreeNode(4, nullptr, nullptr),
                                   new TreeNode(3, nullptr, nullptr));
    input->left = left;
    input->right = right;
    cout << isSymmetric(input);
}