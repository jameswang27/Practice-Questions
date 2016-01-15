#include <iostream>

struct Node
{
	Node *left;
	Node *right;

	int value;
};

bool validateBST(Node *root);
bool validateBSTHelper(Node *root, int min, int max);
bool validateBST(Node *root)
{
	return validateBSTHelper(root, INT_MIN, INT_MAX);
}

bool validateBSTHelper(Node *root, int min, int max)
{
	if (root == nullptr) return true;
	if (root->left == nullptr && root->right == nullptr) return true;

	if (root->value >= max || root->value < min) return false;

	if (!validateBSTHelper(root->right, root->value, max)) return false;
	if (!validateBSTHelper(root->left, min, root->value)) return false;

	return true;
}

