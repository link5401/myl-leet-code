#include <bits/stdc++.h>
#include <queue>
#include <iostream>
#include <vector>
#include <utility>

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

// int height(TreeNode* root){
//     if (root == nullptr) return 0;
//     int left = height(root->left);
//     int right = height(root->right);
//     return 1 + max(left,right);
// }

//  TreeNode* root =
//         new TreeNode(3, new TreeNode(9, nullptr, nullptr),
//                      new TreeNode(20, new TreeNode(15, nullptr, nullptr),
//                                   new TreeNode(7, nullptr, nullptr)));

// TreeNode* root = new TreeNode(
//     2, nullptr,
//     new TreeNode(
//         3, nullptr,
//         new TreeNode(
//             4, nullptr,
//             new TreeNode(5, nullptr, new TreeNode(6, nullptr, nullptr)))));