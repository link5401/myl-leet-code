#include "../template.hpp"

int solutions(TreeNode* root, bool& balanced) {
    if (root == nullptr || balanced == false) {
        return 0;
    }
     else {
        int left = solutions(root->left, balanced);
        int right = solutions(root->right, balanced);
        if (abs(left - right) > 1) balanced = false;
        return max(left, right) + 1;
    }
}
bool isBalanced(TreeNode* root) {
    bool result = true;
    solutions(root, result);
    return result;
}

int main() {
    TreeNode* root =
        new TreeNode(3, new TreeNode(9, nullptr, nullptr),
                     new TreeNode(20, new TreeNode(15, nullptr, nullptr),
                                  new TreeNode(7, nullptr, nullptr)));

    cout << isBalanced(root);
}