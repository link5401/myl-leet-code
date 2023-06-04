#include "../template.hpp"
/*
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root
node down to the nearest leaf node.

Note: A leaf is a node with no children.
**/

// DFS
/*
Time complexity : O(n) because we traverse every node once
Space complexity: O(n) because in the stack, the number of active stack calls
equals to the depth of the tree
*/
//  int minDepth(TreeNode* root) {
//      if(root == nullptr) return 0;
//      if(root->left == nullptr) return 1 + minDepth(root->right);
//      if(root->right == nullptr) return 1 + minDepth(root->left);
//      return 1+ min(minDepth(root->right), minDepth(root->left));
//  }

// Queue approach (BFS)
/*
Time complexity: O(n) because we traverse every node of the tree
Space complexity: O(n) maximum number of nodes in the queue would be n
*/
int minDepth(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    int depth = 1;
    while (!q.empty()) {
        int qSize = q.size();
        while (qSize--) {
            cout << qSize << depth << "\n";

            TreeNode* node = q.front();
            q.pop();
            if (node == nullptr) continue;
            if (node->left == nullptr && node->right == nullptr) {
                return depth;
            }
            q.push(node->right);

            q.push(node->left);
        }
        depth++;
    }
    return -1;
}
int main() {
    // TreeNode* root =
    //     new TreeNode(3, new TreeNode(9, nullptr, nullptr),
    //                  new TreeNode(20, new TreeNode(15, nullptr, nullptr),
    //                               new TreeNode(7, nullptr, nullptr)));

    TreeNode* root = new TreeNode(
        2, nullptr,
        new TreeNode(
            3, nullptr,
            new TreeNode(
                4, nullptr,
                new TreeNode(5, nullptr, new TreeNode(6, nullptr, nullptr)))));
    cout << minDepth(root);
}