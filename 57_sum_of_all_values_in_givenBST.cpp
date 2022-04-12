#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int rangeSumBST(TreeNode *root, int L, int R)
{

    int num1 = 0;
    if (root == NULL)
    {
        return 0;
    }
    if (root->val <= R && root->val >= L)
    {
        num1 = root->val;
    }
    return (num1 + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R));
}

int main()
{
    

	TreeNode* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(2);
	root->left->left = newNode(3);
	root->left->right = newNode(4);
	root->right->left = newNode(4);
	root->right->right = newNode(3);

	cout<<rangesumBST(root,1,2);
	
}