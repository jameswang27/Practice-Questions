//This was a question at the UPE Mock Interview. It is also Question 4.5 in Cracking the Coding Interview

/*
Given a tree, verify that it is indeed a binary search tree.
Assume that the right subtree will hold the values that are the same as the root. For example, 12 can have an immediate right value of 12.
*/

#include <iostream>
using namespace std;

struct Node
{
	Node *left = nullptr;
	Node *right = nullptr;

	int value;
};

bool validateBST(Node *root);
bool validateBSTHelper(Node *root, int min, int max);


int main()
{
	Node *root = new Node;
	root->value = 10;
	cout << root->value << endl;
	if (validateBST(root)) cout << "Test 1 passed!" << endl;
	 
	Node *temp = new Node;
	temp->value = 8;
	root->left = temp;
	if (validateBST(root)) cout << "Test 2 passed!" << endl;

	Node* temp2 = new Node;
	temp2->value = 12;
	root->right = temp2;
	if (validateBST(root)) cout << "Test 3 passed!" << endl;

	Node *temp3 = new Node;
	temp3->value = 12;
	temp2->right = temp3;
	if (validateBST(root)) cout << "Test 4 passed!" << endl;

	Node *temp4 = new Node;
	temp4->value = 15;
	temp2->left = temp4;
	if (!validateBST(root)) cout << "Test 5 passed!" << endl;
}

bool validateBST(Node *root)
{
	return validateBSTHelper(root, INT_MIN, INT_MAX);
}

/*
* Name: validateBSTHelper
* Return: bool 
* Inputs: 
*        1. Node
*        2. Min valid value
		 3. Max valid value
*/
bool validateBSTHelper(Node *root, int min, int max)
{
	//Empty tree is a BST by def: base case
	if (root == nullptr)
	{
		cout << "By default, the empty tree is a BST!" << endl;
		return true;
	}

	//violation of value!
	if (root->value >= max || root->value < min) return false;

	//Another base case check: if the node is a leaf 
	if (root->left == nullptr && root->right == nullptr)
	{
		return true;
	}


	if (root->right != nullptr)
		if(!validateBSTHelper(root->right, root->value, max)) return false;
	if (root->left != nullptr)
		if(!validateBSTHelper(root->left, min, root->value)) return false;

	return true;
}