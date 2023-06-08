#include "../template.hpp"

vector<int> result;


vector<int> preOrderTraversal(TreeNode* root) {
    if(root){
        result.push_back(root->val);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
    return result;
}

int main() {
    TreeNode* root =
        new TreeNode(3, new TreeNode(9, nullptr, nullptr),
                     new TreeNode(20, new TreeNode(15, nullptr, nullptr),
                                  new TreeNode(7, nullptr, nullptr)));
    vector<int> v = preOrderTraversal(root);

    for (int i = 0; i< v.size(); i++) {
        cout << v[i];
    }
}