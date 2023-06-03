#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x), left(left), right(right) {}
};
bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr) return true;
    if (p == nullptr || q  == nullptr) return false;
    if (p->val != q->val) return false;
    return isSameTree(p->left, q->left) &&
            isSameTree(p->right, q->right);
}

int main() {
    TreeNode* input1 =
        new TreeNode(1, nullptr, new TreeNode(3, new TreeNode(3), nullptr));
    TreeNode* input2 =
        new TreeNode(1, nullptr, new TreeNode(2, new TreeNode(3), nullptr));
    cout << isSameTree(input1, input2);
}
