#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

public:
    BinaryTree() : root(nullptr) {}

    void insert(int value) {
        root = insertRecursive(root, value);
    }

    void inorderTraversal() {
        inorderTraversalRecursive(root);
    }

private:
    TreeNode* insertRecursive(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }

        if (value < node->val) {
            node->left = insertRecursive(node->left, value);
        } else {
            node->right = insertRecursive(node->right, value);
        }

        return node;
    }

    void inorderTraversalRecursive(TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        inorderTraversalRecursive(node->left);
        std::cout << node->val << " ";
        inorderTraversalRecursive(node->right);
    }
};

int main() {
    BinaryTree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(1);
    tree.insert(4);

    std::cout << "Inorder traversal: ";
    tree.inorderTraversal();
    std::cout << std::endl;

    return 0;
}
