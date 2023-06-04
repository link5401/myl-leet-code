#include "../template.hpp"
/*
Given the root of a binary tree and an integer targetSum,
return true if the tree has a root-to-leaf path such that adding up all the
values along the path equals targetSum.

A leaf is a node with no children.
*/

/*
    BFS
*/
// bool hasPathSum(TreeNode* root, int targetSum) {
//     if (!root) return false;
//     queue<pair<TreeNode*, int>> q;
//     q.push(pair<TreeNode*, int>(root, 0));
//     while (!q.empty()) {
//         int qSize = q.size();

//         while (qSize--) {
//             pair<TreeNode*, int> front = q.front();
//             q.pop();
//             TreeNode* node = front.first;
//             int valueAtCurrent = front.second + node->val;
//             if (!node) continue;
//             if (!node->left && !node->right) {
//                 if (targetSum == valueAtCurrent) return true;
//                 continue;
//             }
//             if (node->left)
//                 q.push(pair<TreeNode*, int>(node->left, valueAtCurrent));
//             if (node->right)
//                 q.push(pair<TreeNode*, int>(node->right, valueAtCurrent));
//         }
//     }
//     return false;
// }

/*
DFS
*/
bool hasPathSum(TreeNode* root, int currentVal, int targetSum) {
    int val = root->val + currentVal;
    if (!root->left && !root->right) {

        if (val == targetSum) return true;
    }
    if (root->left || root->right)
        return hasPathSum(root->left, val, targetSum) ||
            hasPathSum(root->right, val, targetSum);
    return false;
}

bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;
    return hasPathSum(root, 0, targetSum);
}
int main() {
    TreeNode* root =
        new TreeNode(3, new TreeNode(9, nullptr, nullptr),
                     new TreeNode(20, new TreeNode(15, nullptr, nullptr),
                                  new TreeNode(7, nullptr, nullptr)));
    cout << hasPathSum(root, 30);
}