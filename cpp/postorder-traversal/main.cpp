#include "../template.hpp"

vector<int> result;

void helper(TreeNode* root) {
    if (!root) return;
    helper(root->left);

    helper(root->right);
    result.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode* root) {
    helper(root);
    return result;
}

int main() {
    TreeNode* root =
        new TreeNode(3, new TreeNode(9, nullptr, nullptr),
                     new TreeNode(20, new TreeNode(15, nullptr, nullptr),
                                  new TreeNode(7, nullptr, nullptr)));
    vector<int> v = postorderTraversal(root);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
}