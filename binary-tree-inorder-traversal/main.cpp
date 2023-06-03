#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> vect;
vector<int> inorderTraversal(TreeNode* root){
    TreeNode* temp = root;
    if (root != nullptr){
        inorderTraversal(root->left);
        vect.push_back(root->val);
        inorderTraversal(root->right);
    }
    return vect;
}


int main(){
    TreeNode* input= new TreeNode(1,  nullptr, new TreeNode(2,new TreeNode(3), nullptr));
    vector<int> vect = inorderTraversal(input);
    for(int x : vect) {
        cout << x << " ";
    }
}
